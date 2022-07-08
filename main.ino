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

    
}

void loop() {
  
  fin = "";
  

  //casdicsdijcwe8fjqwe8saiduqwddsajcsaedsasudfasudntidsqtndsnantas//psadc8dsck8fdakjdsgasjntdsan
  
  int sensorVal = analogRead(A0);
  int sensorVal2 = analogRead(A1);
  
  leftDist = abs(50 - sensorVal);
  rightDist = abs(140-sensorVal);
  
  if (leftDist < 20 || rightDist < 20) {
    if (leftDist < rightDist) {
      fin += "A";
    }
    else {
      fin += "D";
    }
  }
  
  
  topDist = abs(768 - sensorVal2);
  bottomDist = abs(256-sensorVal2);
  
  if (topDist < 20 || bottomDist < 20) {
    if (topDist < bottomDist) {
      fin += "W";
    }
    else {
      fin += "S";
    }
  }
    
  Serial.println(fin);
    

  
    delay(200);
}
