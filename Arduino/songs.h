
#define FUS 31
#define SCOR 62
#define COR 125
#define NEG 250
#define BLA 500
#define RED 1000

#define NOTE_A0 27
#define NOTE_AS0 29




//Multiplier en 1.5
const PROGMEM uint16_t n_l_1[] = {REST, REST, NOTE_D3, REST, REST, REST, NOTE_D3, REST, REST, NOTE_D3, REST ,REST, REST, NOTE_D3, NOTE_AS2, REST, REST, NOTE_D3, NOTE_AS2, REST, REST, NOTE_AS2, REST, REST, NOTE_D3, REST, REST, NOTE_AS2, REST, REST, REST, NOTE_CS3, REST, REST, NOTE_AS2, REST, REST, NOTE_D3, REST, REST, NOTE_D3, REST, REST ,REST ,REST ,REST,NOTE_GS2,NOTE_B2,REST,NOTE_D3,NOTE_CS3,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,NOTE_A2,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST,REST};
const PROGMEM uint16_t d_l_1[] = {NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,COR ,COR,COR,COR,NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,SCOR,SCOR,SCOR,SCOR,NEG,NEG,NEG,NEG,COR,COR,COR,COR,COR,COR,COR,SCOR,SCOR,COR,COR,SCOR,SCOR,SCOR,SCOR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,NEG,BLA,NEG,BLA,BLA,NEG,NEG,BLA,NEG,NEG,BLA,NEG,NEG,BLA};
const PROGMEM uint16_t n_m_1[] = {NOTE_F3,NOTE_E3,REST,NOTE_A2,NOTE_F3,NOTE_E3,REST,NOTE_F3,NOTE_E3,REST,NOTE_A2 ,NOTE_F3,NOTE_E3,REST,REST,NOTE_A3,NOTE_G3,REST,REST,NOTE_A3,NOTE_G3,REST,NOTE_A3,NOTE_G3,REST,NOTE_G3,NOTE_A3,REST,NOTE_A3,NOTE_G3,NOTE_E3,NOTE_CS3,NOTE_E3,NOTE_G3,REST,NOTE_A3,NOTE_F3,REST,NOTE_A2,NOTE_A2,REST,NOTE_F3,NOTE_E3 ,NOTE_E3 ,NOTE_E3 ,NOTE_E3,REST,REST,NOTE_E3,REST,REST,NOTE_E3,NOTE_G3,NOTE_AS3,NOTE_A3,NOTE_AS3,NOTE_A3,NOTE_AS3,NOTE_A3,NOTE_G3,NOTE_F3,NOTE_E3,NOTE_E3,NOTE_E3,NOTE_E3,NOTE_F3,NOTE_G3,NOTE_A3,NOTE_AS3,NOTE_C4,NOTE_G3,NOTE_C4,NOTE_AS3,NOTE_AS3,NOTE_G3,NOTE_C4,NOTE_AS3,NOTE_A3,NOTE_AS3,NOTE_D4,NOTE_C4,NOTE_AS3,NOTE_AS3,NOTE_A3,NOTE_F3,NOTE_AS3,NOTE_A3,NOTE_A3,NOTE_F3,NOTE_AS3,NOTE_A3,NOTE_F3,REST,NOTE_C3,NOTE_F3,NOTE_A3,NOTE_A3,NOTE_G3,NOTE_E3,NOTE_C3,NOTE_E3,NOTE_G3,NOTE_A3,NOTE_A3,NOTE_G3,NOTE_FS3,NOTE_G3,NOTE_FS3,NOTE_G3,NOTE_AS3,NOTE_AS3,NOTE_A3,NOTE_F3,NOTE_AS3,NOTE_A3,NOTE_A3,NOTE_F3,NOTE_AS3,NOTE_A3,NOTE_C3,NOTE_A3,NOTE_G3,NOTE_F3,NOTE_D3,NOTE_F3,NOTE_D3,NOTE_F3,NOTE_A3,NOTE_G3,NOTE_F3,NOTE_C3,NOTE_F3,NOTE_C3,NOTE_F3,NOTE_F3,NOTE_E3,NOTE_D3,NOTE_C3,NOTE_CS3,NOTE_D3,NOTE_E3,NOTE_C3,NOTE_DS3,NOTE_E3,NOTE_C3,NOTE_DS3,NOTE_E3,NOTE_C3,NOTE_DS3,NOTE_E3,NOTE_C3};
const PROGMEM uint16_t d_m_1[] = { NEG, NEG, NEG, COR, COR, COR, COR, NEG, NEG, NEG,COR , COR, COR, COR, NEG, NEG, NEG, COR, COR, COR, COR, NEG, NEG, NEG, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR, COR,SCOR,SCOR,SCOR,SCOR,NEG,NEG,NEG,NEG,COR,COR,COR,COR,COR,COR,COR,SCOR,SCOR,COR,COR,SCOR,SCOR,SCOR,SCOR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,COR,COR,COR,COR,COR,COR,COR,COR,COR,COR,NEG,NEG,COR,COR,NEG,NEG,NEG,NEG,NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,COR,COR,COR,COR,NEG,NEG,NEG,NEG,BLA,NEG,BLA,BLA,NEG,NEG,BLA,NEG,NEG,BLA,NEG,NEG,BLA};
const PROGMEM uint16_t n_h_1[] = {REST, REST, REST};
const PROGMEM uint16_t d_h_1[] = {3000, 3000, 3000};



const PROGMEM uint16_t n_l_0[] = {NOTE_A5,REST,NOTE_A5,REST,REST};
const PROGMEM uint16_t d_l_0[] = {2000, 3000, 2000, 3000,3000};
const PROGMEM uint16_t n_m_0[] = {NOTE_A4,REST,NOTE_A4,REST,REST};
const PROGMEM uint16_t d_m_0[] = {2000, 3000, 2000, 3000,3000};
const PROGMEM uint16_t n_h_0[] = {NOTE_A3,REST,NOTE_A3,REST,REST};
const PROGMEM uint16_t d_h_0[] = {2000, 3000, 2000, 3000,3000};

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

const PROGMEM uint16_t n_h_5[] = {  

                        //3
                          NOTE_C5, NOTE_DS5, NOTE_G5, NOTE_F5, NOTE_D5, NOTE_AS4, NOTE_GS4, 
                        //4
                          NOTE_C5, NOTE_DS5, NOTE_D5, NOTE_AS4, NOTE_G4, 
                        //5
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
                          REST, NOTE_DS4, NOTE_F4, NOTE_G4, NOTE_G4,
                          REST, NOTE_G4, NOTE_AS4, NOTE_B4, REST,

                          NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_F4,
                          NOTE_G4,
                          REST, NOTE_G4, NOTE_F4, NOTE_F4, 
                          NOTE_DS4, 
                          //22
                          NOTE_F4, NOTE_DS4, NOTE_D4,
                          //23
                          REST, NOTE_C4, NOTE_D4, NOTE_DS4, 
                          //24
                          NOTE_D4, NOTE_C4, NOTE_DS4, REST, NOTE_G4,
                          //25
                          NOTE_F4, NOTE_DS4, NOTE_D4, NOTE_D4, 
                          NOTE_AS3, NOTE_C4,
                          //27
                          REST, REST, REST, REST, //NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_G4,
                          //28
                          REST, NOTE_GS4, NOTE_G4, NOTE_G4, NOTE_F4, //Primero GS4
                          //29
                          //Sincronizado
                          NOTE_G4, NOTE_F4, NOTE_F4, NOTE_AS3, NOTE_AS3, NOTE_AS3,
                          //30
                          NOTE_AS4, NOTE_GS4 ,NOTE_G4 ,NOTE_F4 ,NOTE_F4,
                          //31
                          NOTE_DS4, REST, NOTE_C4, NOTE_D4, NOTE_DS4,
                          //32
                          NOTE_D4, NOTE_C4, NOTE_DS4, NOTE_D4, NOTE_C4, NOTE_F4,
                          //33
                          NOTE_DS4, NOTE_D4, NOTE_F4, NOTE_AS3, NOTE_AS3, NOTE_AS3,
                          //34
                          NOTE_B3, NOTE_C4, NOTE_D4,

                          REST,
                       






                          //FINAL, NOTA IGNORADA
                          REST,

                        };
                          //NOTE_F5, NOTE_E5,
                          //NOTE_D5, NOTE_C5, NOTE_B5, REST, REST, REST, REST, REST, REST,
                          
const PROGMEM uint16_t d_h_5[] = {  

                        //3
                          COR, COR, COR, NEG, COR, COR, NEG, 
                        //4
                          COR, COR, NEG, COR, NEG, 
                        //5
                          COR, COR, COR, NEG, COR, COR, 
                        //6
                          COR+RED,
                        //7
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
                          COR, COR, COR, NEG+COR, COR,

                          NEG, COR, COR, COR,
                          RED,
                          NEG+COR, NEG, COR, COR, 
                          COR, 
                          //22
                          COR+SCOR, COR, SCOR+COR+RED,
                          //23
                          COR, COR, COR, NEG, COR, COR, 
                          NEG, COR, NEG,

                          NEG, NEG, COR, COR, COR, 
                          //26
                          RED, 
                          //27
                          COR+NEG, NEG, NEG, NEG,
                          //28
                          NEG+COR, NEG, COR, COR, COR+COR+10,
                          //29
                          //Sincronizado
                          NEG, COR, NEG, COR, COR, COR,
                          //30
                          NEG, NEG, NEG, COR, NEG,
                          //31
                          NEG+COR, COR, COR, COR, NEG,
                          //32
                          COR, COR, NEG, COR, COR, NEG,
                          //33
                          COR, COR, NEG, COR, COR, COR,
                          //34
                          NEG+COR, NEG+COR, NEG*3+COR,

                          RED*2,


                          //FINAL NOTA IGNORADA
                          RED

                        };
                          //RED, RED,
                          //NEG, NEG, NEG, NEG, NEG, NEG, NEG, NEG, NEG,
const PROGMEM uint16_t n_m_5[] = {  
                        
                        //3
                          NOTE_C3, NOTE_DS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_AS2, NOTE_GS2, 
                          NOTE_C3, NOTE_DS3, NOTE_D3, NOTE_AS2, NOTE_G2, 
                          NOTE_C3, NOTE_DS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_AS2, 
                          NOTE_GS2,
                          NOTE_AS2, NOTE_C3, NOTE_DS3, NOTE_G3, NOTE_F3, NOTE_D3, NOTE_AS2, NOTE_GS2,
                          NOTE_C3, NOTE_DS3, NOTE_D3, NOTE_AS2, NOTE_G2,
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
                          NOTE_DS3,
                          NOTE_D3,

                          NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3,
                          NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3,
                          NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, 
                          NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, 
                          NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, 
                          NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, //NOTE_AS2, NOTE_AS2, 
                          
                          // NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3, NOTE_C3,
                          NOTE_AS2, NOTE_GS2, NOTE_G2, 
                          //Toca el 28
                          NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2,
                          //29
                          //Sincronizado
                          NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2,
                          //30
                          NOTE_DS3, NOTE_DS3, NOTE_DS3, NOTE_D3, NOTE_D3, NOTE_D3,
                          //31
                          NOTE_C3, NOTE_C3, NOTE_C3, NOTE_AS2, NOTE_AS2, NOTE_AS2,
                          //32
                          NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2, NOTE_GS2,
                          //33
                          NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2, NOTE_AS2,
                          //34
                          NOTE_G2, NOTE_G2, NOTE_G2, NOTE_G2, NOTE_F2, NOTE_F2, NOTE_AS2, NOTE_D3,
                          //35
                          NOTE_G2, NOTE_AS2, REST, NOTE_DS3, NOTE_F3, NOTE_G3, NOTE_F3, NOTE_DS3, NOTE_G2,

                          REST,

                          //FINAL NOTA IGNORADA
                          REST,

                        };
                          //NOTE_F5, NOTE_E5,
                          //REST, REST, REST, NOTE_D5, NOTE_C5, NOTE_B5, REST, REST, REST,
                          
const PROGMEM uint16_t d_m_5[] = {  
                        
                        //3
                          COR, COR, COR, NEG, COR, COR, NEG, 
                        //4
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
                          NEG+COR,
                          NEG,

                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR, COR, COR, COR, //COR, COR,

                          // COR, COR, COR, COR, COR, COR, COR, COR+NEG,
                          NEG, NEG, NEG,
                          //Toca el 28
                          COR, COR, COR, COR, COR, COR, COR, COR+COR+10,
                          //29
                          //Sincronizado
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          //30
                          COR, COR, NEG, COR, COR, NEG, COR,
                          //31
                          COR, COR, NEG, COR, COR, NEG, COR,
                          //32
                          COR, COR, COR, COR, COR, COR, COR, COR, 
                          //33
                          COR, COR, COR, COR, COR, COR, COR, COR, 
                          //34
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          //35
                          SCOR, SCOR, SCOR, SCOR, SCOR, SCOR, SCOR, SCOR, NEG*3,  //Final de corchea


                          RED*2,


                          
                          //FINAL NOTA IGNORADA
                          RED,

                        };
                          //RED, NEG*3+SCOR,
                          //NEG, NEG, NEG, NEG, NEG, NEG, NEG, NEG, NEG,
 
const PROGMEM uint16_t n_l_5[] = {  

                        //3
                          NOTE_C2,
                        //4
                          REST, NOTE_G1,
                        //5
                          NOTE_C2, REST, NOTE_GS1,
                        //6
                          REST, NOTE_AS1,
                        //7
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
                          NOTE_D2,


                          NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2,
                          NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2,
                          NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, 
                          NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, 
                          NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1,  
                          NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, REST, REST, //NOTE_AS1, NOTE_AS1, 
                          
                          //NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2, NOTE_C2,
                          NOTE_AS1, NOTE_GS1, NOTE_G1, 
                          //28
                          NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1,
                          //29
                          //Sincronizado
                          NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1,
                          //30
                          NOTE_DS2, NOTE_DS2, NOTE_DS2, NOTE_D2, NOTE_D2, NOTE_D1,
                          //31
                          NOTE_C2, NOTE_C2, NOTE_C2, NOTE_AS1, NOTE_AS1, NOTE_AS1,
                          //32
                          NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1, NOTE_GS1,
                          //33
                          NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1, NOTE_AS1,
                          //34
                          NOTE_G1, NOTE_G1, NOTE_G1, NOTE_G1, NOTE_F1, NOTE_F1, NOTE_AS1, NOTE_D2,
                          //35
                          NOTE_G1, NOTE_AS1, REST, NOTE_DS2, NOTE_F2, NOTE_G2, NOTE_F2, NOTE_DS2, NOTE_G1,


                          REST,


                          //FINAL NOTA IGNORADA
                          REST,
                           
                        };
                          //NOTE_F5, NOTE_E5,
                          //REST, REST, REST, REST, REST, REST, NOTE_D5, NOTE_C5, NOTE_B5,
                          
const PROGMEM uint16_t d_l_5[] = {  
                        
                        //3
                          NEG*8+SCOR,
                        //4
                          COR, COR,
                        //5
                          NEG, BLA+COR, NEG*3,
                        //6                          
                          COR, NEG,
                        //7
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
                          NEG,

                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          COR, COR, COR, COR, COR, COR, //COR, COR,

                          //COR, COR, COR, COR, COR, COR, COR, COR+NEG,
                          NEG, NEG, NEG,
                          //28
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          //29
                          //Sincronizado
                          COR, COR, COR, COR, COR, COR, COR, COR,  
                          //30
                          COR, COR, NEG, COR, COR, NEG, COR,
                          //31
                          COR, COR, NEG, COR, COR, NEG, COR,
                          //32
                          COR, COR, COR, COR, COR, COR, COR, COR, 
                          //33
                          COR, COR, COR, COR, COR, COR, COR, COR, 
                          //34
                          COR, COR, COR, COR, COR, COR, COR, COR,
                          //35
                          SCOR, SCOR, SCOR, SCOR, SCOR, SCOR, SCOR, SCOR, NEG*3, //FInal COR


                          RED*2,

                          
                          //FINAL NOTA IGNORADA
                          RED,

                        };

                          //RED, RED,
                          //NEG, NEG, NEG, NEG, NEG, NEG, NEG, NEG, NEG,
const PROGMEM uint16_t n_l_2[] = {
                                  //Nota ignorada
                                  REST,
                                  //1
                                  REST,
                                  //2
                                  REST,
                                  //3
                                  NOTE_A2, NOTE_E3, NOTE_A3, REST,
                                  //4
                                  NOTE_E2, NOTE_E3, NOTE_GS3, REST, 
                                  //5
                                  NOTE_A2, NOTE_E3, NOTE_A3, REST,
                                  //6
                                  REST,
                                  //7
                                  NOTE_A2, NOTE_E3, NOTE_A3, REST,
                                  //8
                                  NOTE_E2, NOTE_E3, NOTE_GS3, REST,
                                  //9
                                  NOTE_A2, NOTE_E3, NOTE_A3, REST,
                                  //10
                                  REST,
                                  //11
                                  NOTE_A2, NOTE_E3, NOTE_A3, REST,
                                  //12
                                  NOTE_E2, NOTE_E3, NOTE_GS3, REST,
                                  //13
                                  NOTE_A2, NOTE_E3, NOTE_A3, REST,
                                  //14
                                  REST,
                                  //15
                                  NOTE_A2, NOTE_E3, NOTE_A3, REST,
                                  //16
                                  NOTE_E2, NOTE_E3, NOTE_GS3, REST,
                                  //17
                                  NOTE_A2, NOTE_E3, NOTE_A3, REST,
                                  //18
                                  NOTE_C3, NOTE_G3, NOTE_C4, REST,
                                  //19
                                  NOTE_G2, NOTE_G3, NOTE_B3, REST,
                                  //20
                                  NOTE_A2, NOTE_E3, NOTE_A3, REST,


                                  //Nota Ignorada
                                  REST,

                                  


                                  };

const PROGMEM uint16_t d_l_2[] = {
                                  //Nota ignorada
                                  SCOR,
                                  //1
                                  NEG,
                                  //2
                                  NEG*3,
                                  //3
                                  COR, COR, COR, NEG+COR,
                                  //4
                                  COR, COR, COR, NEG+COR,
                                  //5
                                  COR, COR, COR, NEG+COR,
                                  //6
                                  BLA+COR+SCOR, //BLA+NEG, but compensation 
                                  //7
                                  COR, COR, COR, NEG+COR,
                                  //8
                                  COR, COR, COR, NEG+COR,
                                  //9
                                  COR, COR, COR, NEG+COR,
                                  //10
                                  BLA+NEG, //BLA+NEG, but compensation
                                  //11
                                  COR, COR, COR, NEG+SCOR,   //COR, COR, COR, NEG+COR,
                                  //12
                                  COR, COR, COR, NEG+COR,
                                  //13
                                  COR, COR, COR, NEG+COR,
                                  //14
                                  NEG*3,
                                  //15
                                  COR, COR, COR, NEG+COR,
                                  //16
                                  COR, COR, COR, NEG+COR+FUS,  //COR, COR, COR, NEG+COR,
                                  //17
                                  COR, COR, COR, NEG+COR,
                                  //18
                                  COR, COR, COR, NEG+COR,
                                  //19
                                  COR, COR, COR, NEG+COR,
                                  //20
                                  COR, COR, COR, NEG+COR,

                                  //Nota Ignorada
                                  RED,

                                  };





const PROGMEM uint16_t n_m_2[] =  {
                                  //Nota ignorada
                                  REST,
                                  //1
                                  REST,
                                  //2
                                  REST,
                                  //3
                                  REST, NOTE_C4, NOTE_E4, REST,
                                  //4
                                  REST, NOTE_E4, NOTE_GS4, REST, 
                                  //5
                                  REST, NOTE_E4, REST,
                                  //6
                                  REST,
                                  //7
                                  REST, NOTE_C4, NOTE_E4, REST,
                                  //8
                                  REST, NOTE_E4, REST,
                                  //9
                                  REST,
                                  //10
                                  REST,
                                  //11
                                  REST, NOTE_C4, NOTE_E4, REST,
                                  //12
                                  REST, NOTE_E4, NOTE_GS4, REST,
                                  //13
                                  REST, NOTE_E4, REST,
                                  //14
                                  REST,
                                  //15
                                  REST, NOTE_C4, NOTE_E4, REST,
                                  //16
                                  REST, NOTE_E4, REST,
                                  //17
                                  REST,
                                  //18
                                  REST, NOTE_G4, REST,
                                  //19
                                  REST, NOTE_F4, REST,
                                  //20
                                  REST, NOTE_E4, REST,

                                  //Nota Ignorada
                                  REST,
                                  };

const PROGMEM uint16_t d_m_2[] = {
                                  //Nota ignorada
                                  SCOR,
                                  //1
                                  NEG,
                                  //2
                                  NEG*3,
                                  //3
                                  NEG+COR, COR, COR, COR,
                                  //4
                                  NEG+COR, COR, COR, COR,
                                  //5
                                  NEG+COR, COR, NEG,
                                  //6
                                  BLA+COR+SCOR, //BLA+NEG, but compensation 
                                  //7
                                  NEG+COR, COR, COR, COR,
                                  //8
                                  NEG+COR, COR, NEG,
                                  //9
                                  NEG+BLA,
                                  //10
                                  BLA+NEG,
                                  //11
                                  NEG+COR, COR, COR, COR, //NEG+COR, COR, COR, COR, but compensate
                                  //12
                                  NEG+COR, COR, COR, COR,
                                  //13
                                  NEG+COR, COR, NEG,
                                  //14
                                  NEG*3,
                                  //15
                                  NEG+COR, COR, COR, COR,
                                  //16
                                  NEG+COR, COR, NEG,
                                  //17
                                  NEG*3,
                                  //18
                                  NEG+COR+SCOR, COR, NEG,  //NEG+COR, COR, NEG,
                                  //19
                                  NEG+COR, COR, NEG,
                                  //20
                                  NEG+COR, COR, NEG,

                                  RED,

                                  //Nota Ignorada
                                  RED,
                                  };






const PROGMEM uint16_t n_h_2[] = {
                                  //Nota ignorada
                                  REST,
                                  //1
                                  NOTE_E5, NOTE_DS5, 
                                  //2
                                  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
                                  //3
                                  NOTE_A4, REST, NOTE_A4,
                                  //4
                                  NOTE_B4, REST, NOTE_B4,
                                  //5
                                  NOTE_C5, REST, NOTE_E5, NOTE_DS5,
                                  //6
                                  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
                                  //7
                                  NOTE_A4, REST, NOTE_A4,
                                  //8
                                  NOTE_B4, REST, NOTE_C5, NOTE_B4,
                                  //9
                                  NOTE_A4, NOTE_E5, NOTE_DS5,
                                  //10
                                  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
                                  //11
                                  NOTE_A4, REST, NOTE_A4,
                                  //12
                                  NOTE_B4, REST, NOTE_B4,
                                  //13
                                  NOTE_C5, REST, NOTE_E5, NOTE_DS5,
                                  //14
                                  NOTE_E5, NOTE_DS5, NOTE_E5, NOTE_B4, NOTE_D5, NOTE_C5,
                                  //15
                                  NOTE_A4, REST, NOTE_A4,
                                  //16
                                  NOTE_B4, REST, NOTE_C5, NOTE_B4,
                                  //17
                                  NOTE_A4, REST, NOTE_B4, NOTE_C5, NOTE_D5,
                                  //18
                                  NOTE_E5, REST, NOTE_F5, NOTE_E5,
                                  //19
                                  NOTE_D5, REST, NOTE_E5, NOTE_D5,
                                  //20
                                  NOTE_C5, REST, NOTE_D5, NOTE_C5,
                                  //21
                                  NOTE_B4,

                                  //Nota Ignorada
                                  REST,
                          
                                  };


const PROGMEM uint16_t d_h_2[] = {
                                  //Nota ignorada
                                  0,
                                  //1
                                  COR, COR,
                                  //2
                                  COR, COR, COR, COR, COR, COR,
                                  //3
                                  NEG, NEG+COR, COR,
                                  //4
                                  NEG, NEG+COR, COR,
                                  //5
                                  NEG, NEG-SCOR, COR, COR,
                                  //6
                                  COR, COR, COR, COR, COR, COR,
                                  //7
                                  NEG, NEG+COR, COR,
                                  //8
                                  NEG, NEG, COR, COR,
                                  //9
                                  BLA, COR, COR,
                                  //10
                                  COR, COR, COR, COR, COR, COR,
                                  //11
                                  NEG, NEG+SCOR, COR,  //NEG, NEG+COR, COR, but compensate
                                  //12
                                  NEG, NEG+COR, COR,
                                  //13
                                  NEG, NEG, COR, COR,
                                  //14
                                  COR, COR, COR, COR, COR, COR,
                                  //15
                                  NEG, NEG+COR, COR,
                                  //16
                                  NEG, NEG, COR, COR,
                                  //17
                                  NEG, COR, COR, COR, COR,
                                  //18
                                  NEG, NEG, COR, COR,
                                  //19
                                  NEG, NEG, COR, COR,
                                  //20
                                  NEG, NEG, COR, COR,
                                  //21
                                  NEG, NEG, COR, COR,

                                  //Nota Ignorada
                                  BLA,

                                  };