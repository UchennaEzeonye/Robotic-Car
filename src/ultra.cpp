// #include <ArduinoJson.h>

// int trigPin =13;
// int echoPin =19;
// int travelTime;       //time it takes to hit the sensr and travel back
// int speedofsound =343; //in meter per seconds
// float distanceinM;
// float distanceinCm;

// void setup()
// {
//   Serial.begin(115200);
//   pinMode(trigPin, OUTPUT);
//   pinMode(echoPin, INPUT);
// }

// void loop()
// {
//   digitalWrite(trigPin, LOW);
//   delayMicroseconds(10);
//   digitalWrite(trigPin, HIGH);
//   delayMicroseconds(10);
//   digitalWrite(trigPin, LOW);

//   travelTime=pulseIn(echoPin,HIGH); // to read the high signal sent from the trigpin in microseconds
//   delay(20);
//   distanceinM=speedofsound*(travelTime/2000000.); //distance in meter
//   distanceinCm=distanceinM*100; //distance in cm
    
// //   Serial.println(travelTime);// print time in microseconds
//   Serial.println(distanceinCm); // print distance in cm
//   delay(500);
// }