int Ledpin = 13;
int sw = 2;

void setup() {
  // put your setup code here, to run once:

    pinMode(Ledpin,OUTPUT);
    pinMode(sw,INPUT_PULLUP); // connect positive wire with pullup 

}

void loop() {
  // put your main code here, to run repeatedly:

  if(digitalRead(sw) == LOW){

    digitalWrite(Ledpin,HIGH); //voltage on pin 3,5V
    delay(1000); //delay of 1.0 sec
    
  } else{

    digitalWrite(Ledpin,LOW); //voltage on pin 3,0V
    delay(1000); //delay of 1.0 sec

  }
}
