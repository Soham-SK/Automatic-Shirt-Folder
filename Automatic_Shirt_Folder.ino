#include<Servo.h>
Servo s1;
Servo s2;
Servo s3;
int i;

void setup(){
  s1.attach(9);
  s2.attach(10);
  s3.attach(11);   
}

void loop(){
  
 //s1
    for(i = 0; i < 180; i++){
        s1.write(i);
    }
    delay(1000);
 for(i = 180; i > 0; i--){
        s1.write(i);
    }
    delay(1000);

 //s2
 for(i = 0; i < 180; i++){
        s2.write(i);
    }
    delay(1000);
  
    for(i = 180; i > 0; i--){
        s2.write(i);
    }
    delay(1000);
 //s3
    for(i = 0; i < 180; i++){
        s3.write(i);
    }
    delay(1000);
  
    for(i = 180; i > 0; i--){
        s3.write(i);
    }

    delay(3000);
  
}
