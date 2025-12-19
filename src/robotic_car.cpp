// #include "BluetoothSerial.h"
// BluetoothSerial SerialBT; // create Bluetooth object

// // ===== MOTOR 1 =====
// const int EN1A = 25;
// const int MC1A  = 14;
// const int MC1B  = 26;

// // ===== MOTOR 2 =====
// const int EN1B = 27;
// const int MC2A  = 33;
// const int MC2B  = 32;

// // ===== MOTOR 3 =====
// const int EN2A = 21;
// const int MC3A  = 22;
// const int MC3B  = 23;

// // ===== MOTOR 4 =====
// const int EN2B = 18;
// const int MC4A  = 16;
// const int MC4B  = 17;


// void setup() {
//   Serial.begin(115200);
//   SerialBT.begin("CAR_BT");
//   pinMode(2, OUTPUT);

//   pinMode(EN1A, OUTPUT);
//   pinMode(MC1A, OUTPUT);
//   pinMode(MC1B, OUTPUT);

//   pinMode(EN1B, OUTPUT);
//   pinMode(MC2A, OUTPUT);
//   pinMode(MC2B, OUTPUT);

//   pinMode(EN2A, OUTPUT);
//   pinMode(MC3A, OUTPUT);
//   pinMode(MC3B, OUTPUT);

//   pinMode(EN2B, OUTPUT);
//   pinMode(MC4A, OUTPUT);
//   pinMode(MC4B, OUTPUT);

//   // Enable all channels
//   digitalWrite(EN1A, HIGH);
//   digitalWrite(EN1B, HIGH);
//   digitalWrite(EN2A, HIGH);
//   digitalWrite(EN2B, HIGH);
// }

// void loop() {
//   if (SerialBT.available()) {
//     char command = SerialBT.read();
//     Serial.println(command);

//     if(command == 'F')
//     {
//       digitalWrite(MC1A, HIGH);
//       digitalWrite(MC1B, LOW);
//       digitalWrite(MC2A, HIGH);
//       digitalWrite(MC2B, LOW);
//       digitalWrite(MC3A, HIGH);
//       digitalWrite(MC3B, LOW);
//       digitalWrite(MC4A, HIGH);
//       digitalWrite(MC4B, LOW);
//       Serial.println("forward");
//       digitalWrite(2, HIGH);
//     }

//     else if(command == 'B')
//     {
//       digitalWrite(MC1A, LOW);
//       digitalWrite(MC1B, HIGH);
//       digitalWrite(MC2A, LOW);
//       digitalWrite(MC2B, HIGH);
//       digitalWrite(MC3A, LOW);
//       digitalWrite(MC3B, HIGH);
//       digitalWrite(MC4A, LOW);
//       digitalWrite(MC4B, HIGH);
//       Serial.println("reverse");
//       digitalWrite(2, LOW);
//     }

//     else if(command == 'L')
//     {
//       digitalWrite(MC1A, LOW);
//       digitalWrite(MC1B, HIGH);
//       digitalWrite(MC2A, HIGH);
//       digitalWrite(MC2B, LOW);
//       digitalWrite(MC3A, LOW);
//       digitalWrite(MC3B, HIGH);
//       digitalWrite(MC4A, HIGH);
//       digitalWrite(MC4B, LOW);
//       Serial.println("left");
//       digitalWrite(2, LOW);
//     }
//      else if(command == 'R')
//     {
//       digitalWrite(MC1A, HIGH);
//       digitalWrite(MC1B, LOW);
//       digitalWrite(MC2A, LOW);
//       digitalWrite(MC2B, HIGH);
//       digitalWrite(MC3A, HIGH);
//       digitalWrite(MC3B, LOW);
//       digitalWrite(MC4A, LOW);
//       digitalWrite(MC4B, HIGH);
//       Serial.println("right");
//       digitalWrite(2, HIGH);
//     }
    
//     else if(command == 'S')
//     {
//       digitalWrite(MC1A, LOW);
//       digitalWrite(MC1B, LOW);
//       digitalWrite(MC2A, LOW);
//       digitalWrite(MC2B, LOW);
//       digitalWrite(MC3A, LOW);
//       digitalWrite(MC3B, LOW);
//       digitalWrite(MC4A, LOW);
//       digitalWrite(MC4B, LOW);
//       Serial.println("brake");
//       digitalWrite(2, LOW);
//     }
//   }
// }