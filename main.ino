/*
unity is the best game engine asijdsaicndsgndsajsadngkdsatnasntn

*/

int x_key = A1;
int y_key = A2;
int xpos;

int leftDist;
int rightDist;
int ypos;
void setup() {
  
  Serial.begin(9600);

    
}

void loop() {
  

  //casdicsdijcwe8fjqwe8saiduqwddsajcsaedsasudfasudntidsqtndsnantas//psadc8dsck8fdakjdsgasjntdsan
  
  int sensorVal = analogRead(A0);
  int sensorVal2 = analogRead(A1);
  
  leftDist = abs(50 - sensorVal);
  rightDist = abs(140-sensorVal);
  
  if (leftDist < 20 || rightDist < 20) {
    if (leftDist < rightDist) {
      Serial.println("A");
    }
    else {
      Serial.println("D");
    }
  }
    
   Serial.print("The X and Y coordinate is:");
    Serial.print(sensorVal, DEC);
    Serial.print(",");
    Serial.println(sensorVal2, DEC);
    Serial.println(" ");
    

  
    delay(200);
}
