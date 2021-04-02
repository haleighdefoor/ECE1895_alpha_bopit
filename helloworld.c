#include <stdio.h>
#include <stdlib.h>

//Reagan's comment!

const int button =8;
const int led =7;

void setup() {
  pinMode(button,INPUT);
  pinMode(led,OUTPUT);
  digitalWrite(led,LOW);
}

void loop() {
  if (digitalRead(button)==HIGH){
      digitalWrite(led,HIGH); 
      delay(1000);    
      digitalWrite(led, LOW); 
      delay(1000);
  }
    else{
      digitalWrite(led,LOW);
    }
}  

//Haleigh DeFoor
=======
//Tim Hu comment
=======
//matt dipaolo

