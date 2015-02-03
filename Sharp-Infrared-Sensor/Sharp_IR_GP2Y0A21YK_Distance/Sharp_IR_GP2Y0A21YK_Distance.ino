// Sharp IR GP2Y0A21YK Distance Test

#define Sensor A0 // Sharp IR GP2Y0A21YK (10-80cm, analog)

void setup() {
  Serial.begin(9600); // start the serial port
}

void loop() {
  
  // 5v
  float volts = analogRead(Sensor)*0.0048828125;  // value from sensor * (5/1024)
  int distance = 28*pow(volts, -1); // worked out from datasheet graph
  delay(40); // slow down serial port 
  
  if (distance <= 80){
    Serial.println(distance);   // print the distance
  }
}
