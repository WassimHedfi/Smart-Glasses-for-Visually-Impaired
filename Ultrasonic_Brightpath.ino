/*
ROBOTHON ELECTRONIX ENSTAB
Workshop 2 : Ultrasonic Sensor
Copy and Paste this code on your Arduino IDE


This code is delicately typed by the ELECTRONIX Club for whom this may be of concern
HEDFI Wassim.
*/


#define echoPin A3  // attacher echo du capteur ultrason a la pin A3 de la carte
#define trigPin A2  // attacher trig du capteur ultrason a la pin A2 de la carte

void setup() {
  // put your setup code here, to run once:
  pinMode(echoPin, INPUT);  // echopin is an input for the Arduino board
  pinMode(trigPin, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);  // you saw this before ;)
}

void loop() {
  // put your main code here, to run repeatedly:
  //***calcul de distance à l'aide du capteur ultrason

  digitalWrite(trigPin, LOW);   // initialize the trigger at 0 (LOW)
  delayMicroseconds(2);         // keep it at zero for 2ms
  digitalWrite(trigPin, HIGH);  // send a pulse (HIGH) on the trigger
  delayMicroseconds(10);        // send the high pulse for 10ms
  digitalWrite(trigPin, LOW);   // put it back at zero

  float duration = pulseIn(echoPin, HIGH);  // the function 'pulsin' acts as a chronometer
                                            // when you call it it will start counting time and stop when echoPin is high and returns the duration
  // Calculating the distance
  float distance = duration * 0.034 / 2;         // Speed of sound wave divided by 2 (from the sensor to the object and back == double the distance we want to calculate)
  float distanceCentimeter;                      // create a variable to store the distance
  if (distance > 200) distanceCentimeter = 200;  // ultrasonic sensor will give faulty measures for distances over 200cm, so the max distance we will define is 200cm
  else distanceCentimeter = distance;

  if (distanceCentimeter < 50) {
    tone(5, 500);
    delay(400);
    noTone(5);
    delay(200);
    tone(5, 500);
    delay(300);
    noTone(5);
    delay(1000);
  } 
  else noTone(5);
  delay(50);
}
