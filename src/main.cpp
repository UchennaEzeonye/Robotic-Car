// #include <ArduinoJson.h>

// const int EN1=27;   //Half Bridge 1 Enable
// const int MC1=33;  //Motor Control 1
// const int MC2=32;  //Motor Control 2
// const int EN2=26;   //Half Bridge 1 Enable
// const int MC3=13;  //Motor Control 1
// const int MC4=14;  //Motor Control 2
// //const int POT=0;  //POT on Analog Pin 0
// //int val = 0;      //for storing the reading from the POT
// //int velocity = 0; //For storing the desired velocity (from 0-255)

// void setup(){
//   pinMode(EN1, OUTPUT);
//   pinMode(MC1, OUTPUT);
//   pinMode(MC2, OUTPUT);
//   pinMode(EN2, OUTPUT);
//   pinMode(MC3, OUTPUT);
//   pinMode(MC4, OUTPUT);
// //  brake(); //Initialize with motor stopped
// }

// void loop() {
// //  val = analogRead(POT);
// //  //go forward
// //  if (val > 562){
// //    velocity = map(val, 563, 1023, 0, 255);
//     digitalWrite(MC1, HIGH);
//     digitalWrite(MC2, LOW);
//     digitalWrite(EN1, HIGH);

//     digitalWrite(MC3, HIGH);
//     digitalWrite(MC4, LOW);
//     digitalWrite(EN2, HIGH);
//     }
    
// //    //go backward
// //   else if (val < 462){
// //    velocity = map(val, 461, 0, 0, 255);
// //    digitalWrite(EN, LOW);
// //    digitalWrite(MC1, LOW);
// //    digitalWrite(MC2, HIGH);
// //    analogWrite(EN, rate);
// //   }
// //   
// //   //brake
// //   else{
// //    digitalWrite(EN, LOW);
// //    digitalWrite(MC1, LOW);
// //    digitalWrite(MC2, LOW);
// //    digitalWrite(EN, HIGH); 
// //   }
// //}