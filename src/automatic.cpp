#include <ArduinoJson.h>

// ===== MOTOR 1 =====
const int EN1A = 25;
const int MC1A  = 14;
const int MC1B  = 26;

// ===== MOTOR 2 =====
const int EN1B = 27;
const int MC2A  = 33;
const int MC2B  = 32;

// ===== MOTOR 3 =====
const int EN2A = 21;
const int MC3A  = 22;
const int MC3B  = 23;

// ===== MOTOR 4 =====
const int EN2B = 18;
const int MC4A  = 16;
const int MC4B  = 17;

int trigPin =13;
int echoPin =19;
int travelTime;       //time it takes to hit the sensr and travel back
int speedofsound =343; //in meter per seconds
float distanceinM;
float distanceinCm;

void setup() {
  Serial.begin(115200);
  pinMode(2, OUTPUT);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(EN1A, OUTPUT);
  pinMode(MC1A, OUTPUT);
  pinMode(MC1B, OUTPUT);

  pinMode(EN1B, OUTPUT);
  pinMode(MC2A, OUTPUT);
  pinMode(MC2B, OUTPUT);

  pinMode(EN2A, OUTPUT);
  pinMode(MC3A, OUTPUT);
  pinMode(MC3B, OUTPUT);

  pinMode(EN2B, OUTPUT);
  pinMode(MC4A, OUTPUT);
  pinMode(MC4B, OUTPUT);

  // Enable all channels
  digitalWrite(EN1A, HIGH);
  digitalWrite(EN1B, HIGH);
  digitalWrite(EN2A, HIGH);
  digitalWrite(EN2B, HIGH);
}


void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(10);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  travelTime=pulseIn(echoPin,HIGH); // to read the high signal sent from the trigpin in microseconds
  delay(20);
  distanceinM=speedofsound*(travelTime/2000000.); //distance in meter
  distanceinCm=distanceinM*100; //distance in cm
    
//   Serial.println(travelTime);// print time in microseconds
  Serial.println(distanceinCm); // print distance in cm

    if(distanceinCm > 15)
    {
      digitalWrite(MC1A, LOW);
      digitalWrite(MC1B, HIGH);
      digitalWrite(MC2A, LOW);
      digitalWrite(MC2B, HIGH);
      digitalWrite(MC3A, LOW);
      digitalWrite(MC3B, HIGH);
      digitalWrite(MC4A, LOW);
      digitalWrite(MC4B, HIGH);
      Serial.println("reverse");
      digitalWrite(2, LOW);
    }

    else if(distanceinCm < 15)
    {
      digitalWrite(MC1A, HIGH);
      digitalWrite(MC1B, LOW);
      digitalWrite(MC2A, HIGH);
      digitalWrite(MC2B, LOW);
      digitalWrite(MC3A, HIGH);
      digitalWrite(MC3B, LOW);
      digitalWrite(MC4A, HIGH);
      digitalWrite(MC4B, LOW);
      Serial.println("forward");
      digitalWrite(2, HIGH);
      delay(1000);

      digitalWrite(MC1A, HIGH);
      digitalWrite(MC1B, LOW);
      digitalWrite(MC2A, LOW);
      digitalWrite(MC2B, HIGH);
      digitalWrite(MC3A, HIGH);
      digitalWrite(MC3B, LOW);
      digitalWrite(MC4A, LOW);
      digitalWrite(MC4B, HIGH);
      Serial.println("right");
      digitalWrite(2, HIGH);
      delay(2000);
    }




//     else if(distanceinCm == 'L')
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
//      else if(distanceinCm == 'R')
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
    
//     else if(distanceinCm == 'S')
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
  
}