#include <Keyboard_da_DK.h>
#include <Keyboard_fr_FR.h>
#include <Keyboard_de_DE.h>
#include <Keyboard_it_IT.h>
#include <Keyboard_es_ES.h>
#include <KeyboardLayout.h>
#include <Keyboard_sv_SE.h>
#include <Keyboard.h>

/*
unity is the best game engine asijdsaicndsgndsajsadngkdsatnasntn

*/

int x_key = A1;
int y_key = A2;
int xpos;

int leftDist;
int rightDist;
int topDist;
String fin;
int bottomDist;
int ypos;
void setup() {
  
  Serial.begin(9600);
  fin = "";
  
  Keyboard.begin();
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);


}

void loop() {
  
  fin = "";

  //casdicsdijcwe8fjqwe8saiduqwddsajcsaedsasudfasudntidsqtndsnantas//psadc8dsck8fdakjdsgasjntdsan
  
  int sensorVal = analogRead(A0);
  int sensorVal2 = analogRead(A1);
  Serial.println(sensorVal, DEC);
  Serial.println(sensorVal2, DEC);
  
  leftDist = abs(0 - sensorVal);
  rightDist = abs(1023-sensorVal);
  
  if (leftDist < 20 || rightDist < 20) {
    if (leftDist < rightDist) {
      
      Keyboard.press('a');
      delay(50);
      Keyboard.release('a');
   
      Serial.println("mogusntiyengbeni");
    }
    else {
      
      Keyboard.press('d');
      delay(50);
      Keyboard.release('d');
    
    }
  }
  
  
  topDist = abs(0 - sensorVal2);
  bottomDist = abs(1023-sensorVal2);
  
  if (topDist < 20 || bottomDist < 20) {
    if (topDist < bottomDist) {
    
      Keyboard.press('w');
      delay(50);
      Keyboard.release('w');
     
    }
    else {
      
      Keyboard.press('s');
      delay(50);
      Keyboard.release('s');
      
    }
  }
    
 
    

  
    delay(200);
}
