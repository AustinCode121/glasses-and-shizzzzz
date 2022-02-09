#include <Servo.h>

Servo myservo1;
Servo myservo2;

int val = 190;
int nval = -190;

unsigned int servoPin[]={ 5, 6};


void setup()  {
  
  
  myservo1.attach(servoPin[0]);//array
  myservo2.attach(servoPin[1]);


}

void loop(){
  
  
  
  delay(50);
  myservo1.write(val );
  myservo2.write(val );


  delay(500);
  
  myservo1.write(nval );
  myservo2.write(nval );

  
   delay(50);
}