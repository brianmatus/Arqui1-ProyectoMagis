#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <pitches.h>
#include "songs.h"

#define BUZZER_LOW 3
#define BUZZER_MID 5
#define BUZZER_HIGH 6

#define TFT_CS    8
#define TFT_RST   9
#define TFT_DC    10

#define NEXT 2
#define START 4
#define PREVIOUS 7

float SONG_SPEED_MULTIPLIER[] = {4.0,1.5,4.0,1.0, 1.0,1};
long songs_durations[] = {60,47,62,60,60,38};
#define PAUSE_BETWEEN_NOTES 30


#define ARRAYSIZE(x)  (sizeof(x) / sizeof((x)[0]))
Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_RST);

int selected_song = 0;
bool song_is_playing = true;
bool lows_finished = false;
bool mids_finished = false;
bool highs_finished = false;

unsigned int freq_l = 0;
unsigned int freq_m = 0;
unsigned int freq_h = 0;

void setup() {

  pinMode(BUZZER_LOW, OUTPUT);
  pinMode(BUZZER_MID, OUTPUT);
  pinMode(BUZZER_HIGH, OUTPUT);

  Serial.begin(9600);
  Serial.println("ILI9341 Arqui1-Grupo Siete"); 

  tft.begin();
  tft.fillScreen(ILI9341_BLACK);
  drawMainFrame();
  drawPlayIcon();
  drawPreviousIcon();
  drawNextIcon();
  updateDisplayedSongDuration();
}



void loop(void) {
  updateProgressBar(); //TODO uncomment me
  updatePlayPause();
  updateSelectedSong();

  detectPlayPauseButton();
  detectNextButton();
  detectPreviousButton();
  playSong();

  resonateLowNote();
  resonateMidNote();
  resonateHighNote();
}


unsigned long song_l_target_millis = 0;
int current_song_l_note_index = 0;
int max_song_l_index = ARRAYSIZE(n_l_0);
bool l_pause_needed = true;
void playLows() {
  if (lows_finished) {return;}
  if (millis() < song_l_target_millis) {return;}

  if (current_song_l_note_index == max_song_l_index) {
    lows_finished = true;
    freq_l = 0;
    return;
  }

  int l_note = getLowNoteAt(current_song_l_note_index);
  int l_duration = getLowDurationAt(current_song_l_note_index);
  int l_note_duration = l_duration * SONG_SPEED_MULTIPLIER[selected_song];
  
  if (l_pause_needed) {
    freq_l = REST;
    song_l_target_millis = millis() + PAUSE_BETWEEN_NOTES;
    l_pause_needed = false;
  }
  else {
    freq_l = l_note;
    song_l_target_millis = millis() + l_note_duration;
    current_song_l_note_index++;
    l_pause_needed = true;
    // Serial.print("Low Hz is ");
    // Serial.println(l_note);
  }
}


unsigned long song_m_target_millis = 0;
int current_song_m_note_index = 0;
int max_song_m_index = ARRAYSIZE(n_m_0);
bool m_pause_needed = true;
void playMids() {
  if (mids_finished) {return;}
  if (millis() < song_m_target_millis) {return;}

  if (current_song_m_note_index == max_song_m_index) {
    mids_finished = true;
    freq_m = 0;
    return;
  }

  int m_note = getMidNoteAt(current_song_m_note_index);
  int m_duration = getMidDurationAt(current_song_m_note_index);
  int m_note_duration = m_duration * SONG_SPEED_MULTIPLIER[selected_song];
  
  if (m_pause_needed) {
    freq_m = REST;
    song_m_target_millis = millis() + PAUSE_BETWEEN_NOTES;
    m_pause_needed = false;
  }
  else {
    freq_m = m_note;
    song_m_target_millis = millis() + m_note_duration;
    current_song_m_note_index++;
    m_pause_needed = true;
  }
}



unsigned long song_h_target_millis = 0;
int current_song_h_note_index = 0;
int max_song_h_index = ARRAYSIZE(d_h_0);
bool h_pause_needed = true;
void playHighs() {
  if (highs_finished) {return;}
  if (millis() < song_h_target_millis) {return;}

  if (current_song_h_note_index == max_song_h_index) {
    highs_finished = true;
    freq_h = 0;
    return;
  }

  int h_note = getHighNoteAt(current_song_h_note_index);
  int h_duration = getHighDurationAt(current_song_h_note_index);
  int h_note_duration = h_duration * SONG_SPEED_MULTIPLIER[selected_song];
  
  if (h_pause_needed) {
    freq_h = REST;
    song_h_target_millis = millis() + PAUSE_BETWEEN_NOTES;
    h_pause_needed = false;
  }
  else {
    freq_h = h_note;
    song_h_target_millis = millis() + h_note_duration;
    current_song_h_note_index++;
    h_pause_needed = true;
  }
}

void playSong() {

  if (!song_is_playing) {return;}

  if (lows_finished && mids_finished && highs_finished) {
    selected_song = (selected_song+1)%6;
    resetSongVariables();
    updateDisplayedSongDuration();
    Serial.print("Trigger next song to");
    Serial.println(selected_song);
  }
  playLows();
  playMids();
  playHighs();

}

unsigned long progress_bar_target_millis = 0;
int last_progress_bar_pos = 20;
void updateProgressBar() {

  if (millis() < progress_bar_target_millis) {return;}

  tft.fillCircle(last_progress_bar_pos, 267, 7, ILI9341_BLACK);
  tft.fillRect(20, 265, 200, 3, ILI9341_WHITE);

  int percentage = 0;
  if (max_song_l_index >= max_song_m_index && max_song_l_index >= max_song_h_index) {
    percentage = ((current_song_l_note_index-1)*100)/max_song_l_index;
  }

  else if (max_song_m_index >= max_song_l_index && max_song_m_index >= max_song_h_index) {
    percentage = ((current_song_m_note_index-1)*100)/max_song_m_index;
  }
  else {
    percentage = ((current_song_h_note_index-1)*100)/max_song_h_index;
  }

  percentage = max(0, percentage);

  //TODO To calculate percentage, use loop n notes, add +PAUSE_BETWEEN_NOTES*array.size?
  last_progress_bar_pos = percentage*2+20;
  tft.fillCircle(last_progress_bar_pos, 267, 5, ILI9341_WHITE);
  updateDisplayedSongPassedTime();
  progress_bar_target_millis = millis() + 1000;

  

};


long total_time = 0;
void updateDisplayedSongPassedTime() {

  tft.fillRect(15, 280, 25, 7, ILI9341_BLACK);

  long mins = total_time/60/1000;
  long t = mins;
  t = t*60;
  t = t*1000;
  long secs = total_time-t;
  secs = secs/1000;
  
  tft.setTextSize(1);
  tft.setCursor(15, 280);
  tft.print(mins);
  if (secs < 10) {
    tft.print(":0");
  }
  else {
    tft.print(":");
  }
  tft.print(secs);

  total_time += 1000;

}


long current_song_total_time = 42000;
void updateDisplayedSongDuration() {

  tft.fillRect(200, 280, 25, 7, ILI9341_BLACK);

  long mins = current_song_total_time/60/1000;

  long t = mins;
  t = t*60;
  t = t*1000;

  long secs = current_song_total_time-t;
  secs = secs/1000;

  tft.setTextSize(1);
  tft.setCursor(200, 280);
  tft.print(mins);
  if (secs < 10) {
    tft.print(":0");
  }
  else {
    tft.print(":");
  }
  tft.print(secs);
}



bool play_button_pressed = false;
void detectPlayPauseButton() {

  if (digitalRead(START) == HIGH) {
    play_button_pressed = true;
    return;
  }
  //Else
  if (play_button_pressed != true) {
    return;
  }
  song_is_playing = !song_is_playing;
  play_button_pressed = false;
}


bool next_button_pressed = false;
void detectNextButton() {

  if (digitalRead(NEXT) == HIGH) {
    next_button_pressed = true;
    return;
  }
  //Else
  if (next_button_pressed != true) {
    return;
  }
  selected_song = (selected_song+1)%6;
  resetSongVariables();
  updateDisplayedSongDuration();
  next_button_pressed = false; 
}


bool previous_button_pressed = false;
void detectPreviousButton() {

  if (digitalRead(PREVIOUS) == HIGH) {
    previous_button_pressed = true;
    return;
  }
  //Else
  if (previous_button_pressed != true) {
    return;
  }
  if (selected_song == 0) {
    selected_song = 5;
  }
  else {
    selected_song--;
  }
  resetSongVariables();
  previous_button_pressed = false; 
}

bool compensation_last_is_play = song_is_playing;
unsigned long last_play_compensation = 0;
int comp_freq_l = 0;
int comp_freq_m = 0;
int comp_freq_h = 0;

void compensatePause() {

  if (compensation_last_is_play && song_is_playing) {return;}
  //Resume both to comp == song_is??
  if (!compensation_last_is_play && !song_is_playing) {return;}

  if (compensation_last_is_play && !song_is_playing) {
    compensation_last_is_play = false;
    last_play_compensation = millis();
    comp_freq_l = freq_l;
    comp_freq_m = freq_m;
    comp_freq_h = freq_h;

    freq_l = 0;
    freq_m = 0;
    freq_h = 0;
    return;
  }

    freq_l = comp_freq_l;
    freq_m = comp_freq_m;
    freq_h = comp_freq_h;

  //!compensation_last_is_play && song_is_playing --> needs compensation lmao
  song_l_target_millis += millis() - last_play_compensation;
  song_m_target_millis += millis() - last_play_compensation;
  song_h_target_millis += millis() - last_play_compensation;

  

}


void resetSongVariables() {
  lows_finished = false;
  mids_finished = false;
  highs_finished = false;

  current_song_l_note_index = 0;
  current_song_m_note_index = 0;
  current_song_h_note_index = 0;
  
  song_l_target_millis = 0;
  song_m_target_millis = 0;
  song_h_target_millis = 0;
  max_song_l_index = sizeOfCurrentSongLow() - 1;
  max_song_m_index = sizeOfCurrentSongMid() - 1;
  max_song_h_index = sizeOfCurrentSongHigh() - 1;

  total_time = 0;
  current_song_total_time = songs_durations[selected_song];
  current_song_total_time *= 1000;
}

unsigned long anim_start_target_time = 0;
void updatePlayPause() {

  if (millis()<anim_start_target_time) {
    return;    
  }

  if (song_is_playing) {
    drawPauseIcon();
  }
  else {
    drawPlayIcon();
  }
  anim_start_target_time = millis()+500;
}

long anim_selected_song_target_time = 0;
void updateSelectedSong() {
  if (millis()<anim_selected_song_target_time) {
    return;    
  }

  drawSelectedSongIndicator(selected_song);
  anim_selected_song_target_time = millis()+500;
}

int last_detected_selected_song = 0;
void drawSelectedSongIndicator(int new_selected) {

  switch(last_detected_selected_song) {
    case 0:
      tft.fillCircle(37, 49, 6, ILI9341_BLACK);
      tft.fillCircle(37, 49, 3, ILI9341_WHITE);
      break;
    case 1:
      tft.fillCircle(37, 87, 6, ILI9341_BLACK);
      tft.fillCircle(37, 87, 3, ILI9341_WHITE);
      break;
    case 2:
      tft.fillCircle(37, 117, 6, ILI9341_BLACK);
      tft.fillCircle(37, 117, 3, ILI9341_WHITE);
      break;
    case 3:
      tft.fillCircle(37, 147, 6, ILI9341_BLACK);
      tft.fillCircle(37, 147, 3, ILI9341_WHITE);
      break;
    case 4:
      tft.fillCircle(37, 177, 6, ILI9341_BLACK);
      tft.fillCircle(37, 177, 3, ILI9341_WHITE);
      break;
    case 5:
      tft.fillCircle(37, 219, 6, ILI9341_BLACK);
      tft.fillCircle(37, 219, 3, ILI9341_WHITE);
      break;
  }

  switch(new_selected) {
    case 0:
      tft.fillCircle(37, 49, 6, ILI9341_GREEN);
      tft.fillCircle(37, 49, 3, ILI9341_WHITE);
      break;
    case 1:
      tft.fillCircle(37, 87, 6, ILI9341_GREEN);
      tft.fillCircle(37, 87, 3, ILI9341_WHITE);
      break;
    case 2:
      tft.fillCircle(37, 117, 6, ILI9341_GREEN);
      tft.fillCircle(37, 117, 3, ILI9341_WHITE);
      break;
    case 3:
      tft.fillCircle(37, 147, 6, ILI9341_GREEN);
      tft.fillCircle(37, 147, 3, ILI9341_WHITE);
      break;
    case 4:
      tft.fillCircle(37, 177, 6, ILI9341_GREEN);
      tft.fillCircle(37, 177, 3, ILI9341_WHITE);
      break;
    case 5:
      tft.fillCircle(37, 219, 6, ILI9341_GREEN);
      tft.fillCircle(37, 219, 3, ILI9341_WHITE);
      break;
  }

  last_detected_selected_song = new_selected;

  // tft.fillCircle(37, 117, 6, ILI9341_GREEN);
  // tft.fillCircle(37, 117, 3, ILI9341_WHITE);
}

void drawMainFrame() {

  tft.drawRect(10, 10, 220, 300, ILI9341_WHITE);

  
  tft.drawRect(15, 15, 210, 255-25, ILI9341_YELLOW);
  tft.drawRect(16, 16, 208, 253-25, ILI9341_YELLOW);

  
  tft.setTextColor(ILI9341_WHITE);
  tft.setTextSize(2);

  tft.fillCircle(37, 49, 3, ILI9341_WHITE);
  tft.setCursor(50, 30);
  tft.print("Noche de luna");
  tft.setCursor(50, 50);
  tft.print("entre ruinas");

  tft.fillCircle(37, 87, 3, ILI9341_WHITE);
  tft.setCursor(50, 80);
  tft.print("Mi lupita");

  tft.fillCircle(37, 117, 3, ILI9341_WHITE);
  tft.setCursor(50, 110);
  tft.print("Para Elisa");

  tft.fillCircle(37, 147, 3, ILI9341_WHITE);
  tft.setCursor(50, 140);
  tft.print("Para Adelina");

  tft.fillCircle(37, 177, 3, ILI9341_WHITE);
  tft.setCursor(50, 170);
  tft.print("Sarias Song");

  tft.fillCircle(37, 219, 3, ILI9341_WHITE);
  tft.setCursor(50, 200);
  tft.print("Cancion");
  tft.setCursor(50, 220);
  tft.print("sorpresa");
}


void drawPreviousIcon() {
  int size = 7;
  int cx = 70;
  int cy = 285;
  tft.fillTriangle(cx, cy, cx-size*2, cy+size, cx, cy+size*2, ILI9341_WHITE);
  tft.fillTriangle(cx-size*2, cy, cx-size*4, cy+size, cx-size*2, cy+size*2, ILI9341_WHITE);
}


void drawNextIcon() {
  int size = 7;
  int cx = 160;
  int cy = 285;
  tft.fillTriangle(cx, cy, cx, cy+size*2, cx+size*2, cy+size, ILI9341_WHITE);
  tft.fillTriangle(cx+size*2, cy, cx+size*2, cy+size*2, cx+size*4, cy+size, ILI9341_WHITE);
}

void drawPlayIcon() {
  int size = 10;
  int cx = 100;
  int cy = 280;
  tft.fillRect(90, 280, 35, 22, ILI9341_BLACK);
  tft.fillTriangle(cx, cy, cx, cy+size*2, cx+size*2, cy+size, ILI9341_WHITE);
}


void drawPauseIcon() {

  int size = 10;
  int cx = 100;
  int cy = 280;
  tft.fillRect(90, 280, 35, 22, ILI9341_BLACK);

  tft.fillRect(cx, cy, size-3, size*2, ILI9341_WHITE);
  tft.fillRect(cx+size-1, cy, size-3, size*2, ILI9341_WHITE);
}

int getLowDurationAt(int i) {
  switch (selected_song) {
    case 0:
      return pgm_read_word(&d_l_0[i]);
      break;
    case 1:
      return pgm_read_word(&d_l_1[i]);
      break;
    case 2:
      return pgm_read_word(&d_l_2[i]);
      break;
    case 3:
      return pgm_read_word(&d_l_3[i]);
      break;
    case 4:
      return pgm_read_word(&d_l_4[i]);
      break;
    case 5:
      return pgm_read_word(&d_l_5[i]);
      break;
  }
}

int getLowNoteAt(int i) {
  switch (selected_song) {
    case 0:
      return pgm_read_word(&n_l_0[i]);
      break;
    case 1:
      return pgm_read_word(&n_l_1[i]);
      break;
    case 2:
      return pgm_read_word(&n_l_2[i]);
      break;
    case 3:
      return pgm_read_word(&n_l_3[i]);
      break;
    case 4:
      return pgm_read_word(&n_l_4[i]);
      break;
    case 5:
      return pgm_read_word(&n_l_5[i]);
      break;
  }
}

int getMidDurationAt(int i) {
  switch (selected_song) {
    case 0:
      return pgm_read_word(&d_m_0[i]);
      break;
    case 1:
      return pgm_read_word(&d_m_1[i]);
      break;
    case 2:
      return pgm_read_word(&d_m_2[i]);
      break;
    case 3:
      return pgm_read_word(&d_m_3[i]);
      break;
    case 4:
      return pgm_read_word(&d_m_4[i]);
      break;
    case 5:
      return pgm_read_word(&d_m_5[i]);
      break;
  }
}

int getMidNoteAt(int i) {
  switch (selected_song) {
    case 0:
      return pgm_read_word(&n_m_0[i]);
      break;
    case 1:
      return pgm_read_word(&n_m_1[i]);
      break;
    case 2:
      return pgm_read_word(&n_m_2[i]);
      break;
    case 3:
      return pgm_read_word(&n_m_3[i]);
      break;
    case 4:
      return pgm_read_word(&n_m_4[i]);
      break;
    case 5:
      return pgm_read_word(&n_m_5[i]);
      break;
  }
}

int getHighDurationAt(int i) {
  switch (selected_song) {
    case 0:
      return pgm_read_word(&d_h_0[i]);
      break;
    case 1:
      return pgm_read_word(&d_h_1[i]);
      break;
    case 2:
      return pgm_read_word(&d_h_2[i]);
      break;
    case 3:
      return pgm_read_word(&d_h_3[i]);
      break;
    case 4:
      return pgm_read_word(&d_h_4[i]);
      break;
    case 5:
      return pgm_read_word(&d_h_5[i]);
      break;
  }
}

int getHighNoteAt(int i) {
  switch (selected_song) {
    case 0:
      return pgm_read_word(&n_h_0[i]);
      break;
    case 1:
      return pgm_read_word(&n_h_1[i]);
      break;
    case 2:
      return pgm_read_word(&n_h_2[i]);
      break;
    case 3:
      return pgm_read_word(&n_h_3[i]);
      break;
    case 4:
      return pgm_read_word(&n_h_4[i]);
      break;
    case 5:
      return pgm_read_word(&n_h_5[i]);
      break;
  }
}

int sizeOfCurrentSongLow() {
  switch (selected_song) {
    case 0:
      return ARRAYSIZE(n_l_0);
      break;
    case 1:
      return ARRAYSIZE(n_l_1);
      break;
    case 2:
      return ARRAYSIZE(n_l_2);
      break;
    case 3:
      return ARRAYSIZE(n_l_3);
      break;
    case 4:
      return ARRAYSIZE(n_l_4);
      break;
    case 5:
      return ARRAYSIZE(n_l_5);
      break;
  }
}

int sizeOfCurrentSongMid() {
  switch (selected_song) {
    case 0:
      return ARRAYSIZE(n_m_0);
      break;
    case 1:
      return ARRAYSIZE(n_m_1);
      break;
    case 2:
      return ARRAYSIZE(n_m_2);
      break;
    case 3:
      return ARRAYSIZE(n_m_3);
      break;
    case 4:
      return ARRAYSIZE(n_m_4);
      break;
    case 5:
      return ARRAYSIZE(n_m_5);
      break;
  }
}

int sizeOfCurrentSongHigh() {
  switch (selected_song) {
    case 0:
      return ARRAYSIZE(n_h_0);
      break;
    case 1:
      return ARRAYSIZE(n_h_1);
      break;
    case 2:
      return ARRAYSIZE(n_h_2);
      break;
    case 3:
      return ARRAYSIZE(n_h_3);
      break;
    case 4:
      return ARRAYSIZE(n_h_4);
      break;
    case 5:
      return ARRAYSIZE(n_h_5);
      break;
  }
}

unsigned long resonate_micros_objective_l = 0;
bool is_active_part_l = false;
void resonateLowNote() {
  if (!song_is_playing) {return;}
  if (freq_l == 0) {return;}

  if (micros() < resonate_micros_objective_l) {
    return;
  }
  digitalWrite(BUZZER_LOW, is_active_part_l ? HIGH : LOW);
  is_active_part_l = !is_active_part_l;
  resonate_micros_objective_l = 1000000/(freq_l*2) + micros();
}

unsigned long resonate_micros_objective_m = 0;
bool is_active_part_m = false;
void resonateMidNote() {
  if (!song_is_playing) {return;}
  if (freq_m == 0) {return;}

  if (micros() < resonate_micros_objective_m) {
    return;
  }
  digitalWrite(BUZZER_MID, is_active_part_m ? HIGH : LOW);
  is_active_part_m = !is_active_part_m;
  resonate_micros_objective_m = 1000000/(freq_m*2) + micros();
}

unsigned long resonate_micros_objective_h = 0;
bool is_active_part_h = false;
void resonateHighNote() {
  if (!song_is_playing) {return;}
  if (freq_h == 0) {return;}

  if (micros() < resonate_micros_objective_h) {
    return;
  }
  digitalWrite(BUZZER_HIGH, is_active_part_h ? HIGH : LOW);
  is_active_part_h = !is_active_part_h;
  resonate_micros_objective_h = 1000000/(freq_h*2) + micros();
}


long songTimePassedUntilIndex(int index) {


  long sum = 0;
  switch (selected_song) {
    case 0:
      for (int i = 0; i<index-1;i++) {
        sum += pgm_read_word(&d_h_0[i]);
      }
      sum = sum*SONG_SPEED_MULTIPLIER[selected_song];
      sum += index*PAUSE_BETWEEN_NOTES;
      return sum;
      break;
    case 1:
      for (int i = 0; i<index-1;i++) {
        sum += pgm_read_word(&d_h_1[i]);
      }
      sum = sum*SONG_SPEED_MULTIPLIER[selected_song];
      sum += index*PAUSE_BETWEEN_NOTES;
      return sum;
      break;
    case 2:
      for (int i = 0; i<index-1;i++) {
        sum += pgm_read_word(&d_h_2[i]);
      }
      sum = sum*SONG_SPEED_MULTIPLIER[selected_song];
      sum += index*PAUSE_BETWEEN_NOTES;
      return sum;
      break;
    case 3:
      for (int i = 0; i<index-1;i++) {
        sum += pgm_read_word(&d_h_3[i]);
      }
      sum = sum*SONG_SPEED_MULTIPLIER[selected_song];
      sum += index*PAUSE_BETWEEN_NOTES;
      return sum;
      break;
    case 4:
      for (int i = 0; i<index-1;i++) {
        sum += pgm_read_word(&d_h_4[i]);
      }
      sum = sum*SONG_SPEED_MULTIPLIER[selected_song];
      sum += index*PAUSE_BETWEEN_NOTES;
      return sum;
      break;
    case 5:
      for (int i = 0; i<index-1;i++) {
        sum += pgm_read_word(&d_h_5[i]);
      }
      sum = sum*SONG_SPEED_MULTIPLIER[selected_song];
      sum += index*PAUSE_BETWEEN_NOTES;
      return sum;
      break;
  }

}