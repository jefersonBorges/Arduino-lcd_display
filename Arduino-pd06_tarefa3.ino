// LiquidCrystal(RS, E, D4, D5, D6, D7) 
#include <LiquidCrystal.h> 
#define D10 10 
#define D11 11 
#define D12 12 
#define D13 13 
#define E 9 
#define RS 8

const int sensor = 7;
char presence;
int sensorRead;

LiquidCrystal LCD(RS, E, D10, D11, D12, D13); 
 
void setup() { 
 LCD.begin(16,2);
  pinMode(sensor, INPUT);
} 
 
void loop() {
 sensorRead = digitalRead(sensor);
  if(sensorRead > 0){
    presence = 'Y';
  } else {
    presence = 'N';
  }
 LCD.print("Presence: ");
 LCD.print(presence);
 delay(100); 
 LCD.clear(); 
}

/*Alteração dos cabos
de-para
9 - 8*
8 - 9*
7 - 13*
6 - 12*
5 - 11*
4 - 10*
*/