

#define SCOR 62
#define COR 125
#define NEG 250
#define BLA 500
#define RED 1000

#define NOTE_A0 27
#define NOTE_AS0 29

const PROGMEM uint16_t n_l_0[] = {NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3};
const PROGMEM uint16_t d_l_0[] = {RED, RED, RED, RED, RED, RED, RED, RED, 20};
const PROGMEM uint16_t n_m_0[] = {NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4};
const PROGMEM uint16_t d_m_0[] = {NEG, NEG, NEG, NEG, NEG, NEG, NEG, NEG, 20};
const PROGMEM uint16_t n_h_0[] = {NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_DS4, NOTE_E4, NOTE_B3, NOTE_D4, NOTE_C4, NOTE_A3};
const PROGMEM uint16_t d_h_0[] = {300, 300, 300, 300, 300, 300, 300, 300, 900};

const PROGMEM uint16_t n_l_1[] =  {REST};//{REST, REST, NOTE_D3, REST, REST, REST, NOTE_D3, REST, REST, NOTE_D3, REST ,REST, REST, NOTE_D3, NOTE_AS2, REST, REST, NOTE_D3, NOTE_AS2, REST, REST, NOTE_AS2, REST, REST, NOTE_D3, REST, REST, NOTE_AS2, REST, REST, REST, NOTE_CS3, REST, REST, NOTE_AS2, REST, REST, NOTE_D3, REST, REST, NOTE_D3, REST, REST ,REST ,REST ,REST,NOTE_GS2,NOTE_B2,REST,NOTE_D3,NOTE_CS3,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,NOTE_A2,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST};
const PROGMEM uint16_t d_l_1[] = {0}; //{NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,COR ,COR,COR,COR,NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,SCOR,SCOR,SCOR,SCOR,NEG,NEG,NEG,NEG,COR,COR,COR,COR,COR,COR,COR,SCOR,SCOR,COR,COR,SCOR,SCOR,SCOR,SCOR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,NEG,BLA,NEG,BLA,BLA,NEG,NEG,BLA,NEG,NEG,BLA,NEG,NEG,BLA};
const PROGMEM uint16_t n_m_1[] =  {REST};//{NOTE_F3,NOTE_E3,REST,NOTE_A2,NOTE_F3,NOTE_E3,REST,NOTE_F3,NOTE_E3,REST,NOTE_A2 ,NOTE_F3,NOTE_E3,REST,REST,NOTE_A3,NOTE_G3,REST,REST,NOTE_A3,NOTE_G3,REST,NOTE_A3,NOTE_G3,REST,NOTE_G3,NOTE_A3,REST,NOTE_A3,NOTE_G3,NOTE_E3,NOTE_CS3,NOTE_E3,NOTE_G3,REST,NOTE_A3,NOTE_F3,REST,NOTE_A2,NOTE_A2,REST,NOTE_F3,NOTE_E3 ,NOTE_E3 ,NOTE_E3 ,NOTE_E3,REST,REST,NOTE_E3,REST,REST,NOTE_E3,NOTE_G3,NOTE_AS3,NOTE_A3,NOTE_AS3,NOTE_A3,NOTE_AS3,NOTE_A3,NOTE_G3,NOTE_F3,NOTE_E3,NOTE_E3,NOTE_E3,NOTE_E3,NOTE_F3,NOTE_G3,NOTE_A3,NOTE_AS3,NOTE_C4,NOTE_G3,NOTE_C4,NOTE_AS3,NOTE_AS3,NOTE_G3,NOTE_C4,NOTE_AS3,NOTE_A3,NOTE_AS3,NOTE_D4,NOTE_C4,NOTE_AS3,NOTE_AS3,NOTE_A3,NOTE_F3,NOTE_AS3,NOTE_A3,NOTE_A3,NOTE_F3,NOTE_AS3,NOTE_A3,NOTE_F3,REST,NOTE_C3,NOTE_F3,NOTE_A3,NOTE_A3,NOTE_G3,NOTE_E3,NOTE_C3,NOTE_E3,NOTE_G3,NOTE_A3,NOTE_A3,NOTE_G3,NOTE_FS3,NOTE_G3,NOTE_FS3,NOTE_G3,NOTE_AS3,NOTE_AS3,NOTE_A3,NOTE_F3,NOTE_AS3,NOTE_A3,NOTE_A3,NOTE_F3,NOTE_AS3,NOTE_A3,NOTE_C3,NOTE_A3,NOTE_G3,NOTE_F3,NOTE_D3,NOTE_F3,NOTE_D3,NOTE_F3,NOTE_A3,NOTE_G3,NOTE_F3,NOTE_C3,NOTE_F3,NOTE_C3,NOTE_F3,NOTE_F3,NOTE_E3,NOTE_D3,NOTE_C3,NOTE_CS3,NOTE_D3,NOTE_E3,NOTE_C3,NOTE_DS3,NOTE_E3,NOTE_C3,NOTE_DS3,NOTE_E3,NOTE_C3,NOTE_DS3,NOTE_E3,NOTE_C3};
const PROGMEM uint16_t d_m_1[] =  {0}; //{ NEG, NEG, NEG, COR, COR, COR, COR, NEG, NEG, NEG,COR , COR, COR, COR, NEG, NEG, NEG, COR, COR, COR, COR, NEG, NEG, NEG, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR,SCOR,SCOR,SCOR,SCOR,NEG,NEG,NEG,NEG,COR,COR,COR,COR,COR,COR,COR,SCOR,SCOR,COR,COR,SCOR,SCOR,SCOR,SCOR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,NEG,BLA,NEG,BLA,BLA,NEG,NEG,BLA,NEG,NEG,BLA,NEG,NEG,BLA};
const PROGMEM uint16_t n_h_1[] =  {REST};//{REST};
const PROGMEM uint16_t d_h_1[] = {30000};

const PROGMEM uint16_t n_l_2[] = {NOTE_A4, REST};
const PROGMEM uint16_t d_l_2[] = {30000, 3000};
const PROGMEM uint16_t n_m_2[] = {NOTE_A4, REST};
const PROGMEM uint16_t d_m_2[] = {30000, 3000};
const PROGMEM uint16_t n_h_2[] = {NOTE_A4, REST};
const PROGMEM uint16_t d_h_2[] = {30000, 3000};

const PROGMEM uint16_t n_l_3[] = {NOTE_A3, REST};
const PROGMEM uint16_t d_l_3[] = {30000, 3000};
const PROGMEM uint16_t n_m_3[] = {NOTE_A3, REST};
const PROGMEM uint16_t d_m_3[] = {30000, 3000};
const PROGMEM uint16_t n_h_3[] = {NOTE_A3, REST};
const PROGMEM uint16_t d_h_3[] = {30000, 3000};

const PROGMEM uint16_t n_l_4[] = {NOTE_B3, REST};
const PROGMEM uint16_t d_l_4[] = {30000, 3000};
const PROGMEM uint16_t n_m_4[] = {NOTE_B3, REST};
const PROGMEM uint16_t d_m_4[] = {30000, 3000};
const PROGMEM uint16_t n_h_4[] = {NOTE_B3, REST};
const PROGMEM uint16_t d_h_4[] = {30000, 3000};

const PROGMEM uint16_t n_h_5[] = {  NOTE_C5, NOTE_DS5, NOTE_G5, NOTE_F5, NOTE_D5, NOTE_AS4, NOTE_GS4, 
                          NOTE_C5, NOTE_DS5, NOTE_D5, NOTE_AS4, NOTE_G4, 
                          NOTE_C5, NOTE_DS5, NOTE_G5, NOTE_F5, NOTE_D5, NOTE_AS4, 
                          NOTE_GS5,
                          NOTE_C5, NOTE_DS5, NOTE_G5, NOTE_F5, NOTE_D5, NOTE_AS4, NOTE_GS4,
                          NOTE_C5, NOTE_DS5, NOTE_D5, NOTE_AS4, NOTE_G4,
                          NOTE_C5, NOTE_DS5, NOTE_G5, NOTE_F5, NOTE_D5, NOTE_AS4,
                          NOTE_GS5,
                          REST, NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_F4,

                          NOTE_G4, 
                          REST, NOTE_G4, NOTE_F4, NOTE_F4, NOTE_DS4, 
                          NOTE_F4, NOTE_DS4, NOTE_D4, 
                          REST, NOTE_C4, NOTE_D4, NOTE_DS4,
                          REST, NOTE_D4, NOTE_DS4, NOTE_F4,
                          REST, NOTE_DS4, NOTE_F4, NOTE_E4, NOTE_G4,
                          REST, NOTE_G4, REST,

                          REST, NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_F4
                        

                        };

const PROGMEM uint16_t d_h_5[] = {  COR, COR, COR, NEG, COR, COR, NEG, 
                          COR, COR, NEG, COR, NEG, 
                          COR, COR, COR, NEG, COR, COR, 
                          COR+RED,
                          COR, COR, COR, NEG, COR, COR, NEG, 
                          COR, COR, NEG, COR, NEG, 
                          COR, COR, COR, NEG, COR, COR, 
                          COR+RED,
                          NEG+COR, NEG, COR, COR, COR,

                          RED, 
                          NEG+COR, NEG, COR, COR, COR,
                          COR+SCOR, COR+SCOR, COR+RED,
                          COR, COR, COR, COR+NEG*2,
                          COR, COR, COR, COR+NEG*2,
                          COR, COR, COR, NEG, COR+NEG,
                          COR, COR, NEG,

                          NEG+COR, NEG, COR, COR, COR

                        };

const PROGMEM uint16_t n_m_5[] = {  NOTE_C3, NOTE_DS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_AS2, NOTE_GS2, 
                          NOTE_C3, NOTE_DS3, NOTE_D3, NOTE_AS2, NOTE_G2, 
                          NOTE_C3, NOTE_DS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_AS2, 
                          NOTE_GS2,
                          NOTE_AS2, NOTE_C3, NOTE_DS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_AS2, NOTE_GS2,
                          NOTE_C3, NOTE_DS5, NOTE_D3, NOTE_AS2, NOTE_G2,
                          NOTE_C3, NOTE_DS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_AS2, 
                          NOTE_GS2,
                          REST,
                          NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3,
                          NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3,
                          NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, 
                          NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, 
                          NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, 
                          NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, 
                          NOTE_DS3, NOTE_DS3, NOTE_DS3, NOTE_DS3, NOTE_DS3, NOTE_DS3, NOTE_DS3, NOTE_DS3, 
                          NOTE_G2, NOTE_G2, NOTE_G2, 
                          NOTE_DS3, NOTE_DS3, NOTE_DS3,
                          NOTE_D3, NOTE_D3


                        };

const PROGMEM uint16_t d_m_5[] = {  COR, COR, COR, NEG, COR, COR, NEG, 
                          COR, COR, NEG, COR, NEG, 
                          COR, COR, COR, NEG, COR, COR, 
                          RED,
                          NEG, COR, COR, COR, NEG, COR, COR, NEG, 
                          COR, COR, NEG, COR, NEG, 
                          COR, COR, COR, NEG, COR, COR, 
                          RED+COR+NEG,
                          NEG*3,
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR,
                          COR, COR, COR,
                          COR, COR

                        };
 
const PROGMEM uint16_t n_l_5[] = {  NOTE_C2,
                          REST, NOTE_G1,
                          NOTE_C2,
                          REST,
                          NOTE_GS1,
                          REST, NOTE_AS1,
                          NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, 
                          NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, 
                          NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2,
                          NOTE_GS1,
                          REST,

                          NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2,
                          NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2,
                          NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, 
                          NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, 
                          NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1,  
                          NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1,  
                          NOTE_DS2, NOTE_DS2, NOTE_DS2, NOTE_DS2, NOTE_DS2, NOTE_DS2, NOTE_DS2, NOTE_DS2, 
                          NOTE_G1, NOTE_G1, NOTE_G1, 
                          NOTE_DS2,
                          NOTE_D2, NOTE_D2
                        };


const PROGMEM uint16_t d_l_5[] = {  NEG*7,
                          COR, COR,
                          NEG,
                          BLA+COR,
                          NEG*3,
                          COR, NEG,
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, 
                          RED+COR, 
                          RED,

                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR,
                          NEG+COR,
                          COR, COR
                        };

