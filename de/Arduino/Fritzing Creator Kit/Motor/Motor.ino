/*
  Motor
  dreht einen Motor erst rechts, dann links herum

  Dieses Beispiel aus dem Fritzing Creator Kit: www.fritzing.org/creator-kit.
*/

int motor_this_way=5;
int motor_that_way=4;
int motor_Speed=3;

void setup(){
  pinMode(motor_this_way,OUTPUT);
  pinMode(motor_that_way,OUTPUT);
}

void loop(){
  digitalWrite(motor_this_way,HIGH);
  digitalWrite(motor_that_way,LOW);
  for (int i=0; i<256; i+=5){
    analogWrite(motor_Speed,i);
    delay(20);
  }
  for (int i=255; i>0; i-=5){
    analogWrite(motor_Speed,i);
    delay(20);
  }

  digitalWrite(motor_this_way,LOW);
  digitalWrite(motor_that_way,HIGH);
  for (int i=0; i<256; i+=5){
    analogWrite(motor_Speed,i);
    delay(20);
  }
  for (int i=255; i>0; i-=5){
    analogWrite(motor_Speed,i);
    delay(20);
  }
}


