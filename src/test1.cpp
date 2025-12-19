// #include <ArduinoJson.h>

// const int EN1=9;
// const int EN2=10;
// const int MC1=2;
// const int MC2=3;
// const int MC3=4;
// const int MC4=5;

// void setup() {
//   Serial.begin(9600);
//   pinMode(EN1, OUTPUT);
//   pinMode(EN2, OUTPUT);
//   pinMode(MC1, OUTPUT);
//   pinMode(MC2, OUTPUT);
//   pinMode(MC3, OUTPUT);
//   pinMode(MC4, OUTPUT);
// }

// void loop() {
//   if (Serial.available())
//   {
//     String command = Serial.readStringUntil('\n');
//     if(command == "F")
//     {
//       digitalWrite(EN1, LOW);
//       digitalWrite(MC1, HIGH);
//       digitalWrite(MC2, LOW);
//       digitalWrite(EN1, HIGH);
//       Serial.println("forward");
//     }
//     else if(command == "G")
//     {
//       digitalWrite(EN1, LOW);
//       digitalWrite(MC1, LOW);
//       digitalWrite(MC2, HIGH);
//       digitalWrite(EN1, HIGH);
//       Serial.println("reverse");
//     }
//     else if(command == "L")
//     {
//       digitalWrite(EN2, LOW);
//       digitalWrite(MC3, HIGH);
//       digitalWrite(MC4, LOW);
//       digitalWrite(EN2, HIGH);
//       Serial.println("left");
//     }
//      else if(command == "R")
//     {
//       digitalWrite(EN2, LOW);
//       digitalWrite(MC3, LOW);
//       digitalWrite(MC4, HIGH);
//       digitalWrite(EN2, HIGH);
//       Serial.println("right");
//     }
//     else if(command == "Q")
//     {
//       digitalWrite(EN1, LOW);
//       digitalWrite(EN2, LOW);
//       digitalWrite(MC1, HIGH);
//       digitalWrite(MC2, LOW);
//       digitalWrite(MC3, HIGH);
//       digitalWrite(MC4, LOW);
//       digitalWrite(EN1, HIGH);
//       digitalWrite(EN2, HIGH);
//       Serial.println("forward-left");
//     }
//     else if(command == "E")
//     {
//       digitalWrite(EN1, LOW);
//       digitalWrite(EN2, LOW);
//       digitalWrite(MC1, HIGH);
//       digitalWrite(MC2, LOW);
//       digitalWrite(MC3, LOW);
//       digitalWrite(MC4, HIGH);
//       digitalWrite(EN1, HIGH);
//       digitalWrite(EN2, HIGH);
//       Serial.println("forward-right");
//     }
//     else if(command == "C")
//     {
//       digitalWrite(EN1, LOW);
//       digitalWrite(EN2, LOW);
//       digitalWrite(MC1, LOW);
//       digitalWrite(MC2, HIGH);
//       digitalWrite(MC3, LOW);
//       digitalWrite(MC4, HIGH);
//       digitalWrite(EN1, HIGH);
//       digitalWrite(EN2, HIGH);
//       Serial.println("reverse-right");
//     }
//     else if(command == "Z")
//     {
//       digitalWrite(EN1, LOW);
//       digitalWrite(EN2, LOW);
//       digitalWrite(MC1, LOW);
//       digitalWrite(MC2, HIGH);
//       digitalWrite(MC3, HIGH);
//       digitalWrite(MC4, LOW);
//       digitalWrite(EN1, HIGH);
//       digitalWrite(EN2, HIGH);
//       Serial.println("reverse-left");
//     }
//     else if(command == "S")
//     {
//       digitalWrite(EN1, LOW);
//       digitalWrite(EN2, LOW);
//       digitalWrite(MC1, LOW);
//       digitalWrite(MC2, LOW);
//       digitalWrite(MC3, LOW);
//       digitalWrite(MC4, LOW);
//       digitalWrite(EN1, HIGH);
//       digitalWrite(EN2, HIGH);
//       Serial.println("brake");
//     }
//   }
// }
