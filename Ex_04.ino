const int trigPin = 3;
const int echoPin = 2;
long duration, inches, cm;
int led = 5;

void setup() {
  Serial.begin(9600);
  pinMode(echoPin, INPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  inches = duration / 74 / 2;
  cm = duration / 29 / 2;

  Serial.print("Distance = ");
  Serial.print(inches);
  Serial.print(" '' ");
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  
  if(inches <10){
    digitalWrite(led,HIGH);
  }
  else{
     digitalWrite(led,LOW);
  }

  delay(1000);
}
