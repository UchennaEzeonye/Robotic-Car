// #include "BluetoothSerial.h"
// //#include <ArduinoJson.h>

// const int EN1=27;   //Half Bridge 1 Enable
// const int MC1=33;  //Motor Control 1
// const int MC2=32;  //Motor Control 2
// const int EN2=26;   //Half Bridge 1 Enable
// const int MC3=13;  //Motor Control 1
// const int MC4=14;  //Motor Control 2

// BluetoothSerial SerialBT; // create Bluetooth object

// void setup() {
//   Serial.begin(115200);       // Serial monitor
//   pinMode(2, OUTPUT);
//   SerialBT.begin("CAR_BT"); // Device name for Bluetooth
//   Serial.println("Bluetooth started! Pair with CAR_BT");

//   pinMode(EN1, OUTPUT);
//   pinMode(MC1, OUTPUT);
//   pinMode(MC2, OUTPUT);
//   pinMode(EN2, OUTPUT);
//   pinMode(MC3, OUTPUT);
//   pinMode(MC4, OUTPUT);
// //  brake(); //Initialize with motor stopped

//   digitalWrite(EN1, HIGH);
//   digitalWrite(EN2, HIGH);
// }

// void loop() {
//   if (SerialBT.available()) {         // check if data received from phone
//     // String command = SerialBT.readStringUntil('\n');
//     char command = SerialBT.read();  // read one character
//     Serial.print("Received: ");
//     Serial.println(command);

//     if(command == 'F')
//     {
//       digitalWrite(2, HIGH);
//       digitalWrite(MC1, HIGH);
//       digitalWrite(MC2, LOW);
//       Serial.println("forward");
//     }

//     else if(command == 'B')
//     {
//       digitalWrite(2, LOW);
//       digitalWrite(MC1, LOW);
//       digitalWrite(MC2, HIGH);
//       Serial.println("reverse");
//     }

//     else if(command == 'L')
//     {
//       digitalWrite(2, LOW);
//       digitalWrite(MC3, HIGH);
//       digitalWrite(MC4, LOW);
//       Serial.println("left");
//     }
//      else if(command == 'R')
//     {
//       digitalWrite(2, HIGH);
//       digitalWrite(MC3, LOW);
//       digitalWrite(MC4, HIGH);
//       Serial.println("right");
//     }
//     else if(command == 'Q')
//     {
//       digitalWrite(MC1, HIGH);
//       digitalWrite(MC2, LOW);
//       digitalWrite(MC3, HIGH);
//       digitalWrite(MC4, LOW);
//       Serial.println("forward-left");
//     }
//     else if(command == 'E')
//     {
//       digitalWrite(MC1, HIGH);
//       digitalWrite(MC2, LOW);
//       digitalWrite(MC3, LOW);
//       digitalWrite(MC4, HIGH);
//       Serial.println("forward-right");
//     }
//     else if(command == 'C')
//     {
//       digitalWrite(MC1, LOW);
//       digitalWrite(MC2, HIGH);
//       digitalWrite(MC3, LOW);
//       digitalWrite(MC4, HIGH);
//       Serial.println("reverse-right");
//     }
//     else if(command == 'Z')
//     {
//       digitalWrite(MC1, LOW);
//       digitalWrite(MC2, HIGH);
//       digitalWrite(MC3, HIGH);
//       digitalWrite(MC4, LOW);
//       Serial.println("reverse-left");
//     }
//     else if(command == 'S')
//     {
//       digitalWrite(MC1, LOW);
//       digitalWrite(MC2, LOW);
//       digitalWrite(MC3, LOW);
//       digitalWrite(MC4, LOW);
//       Serial.println("brake");
//     }
//   }
// }