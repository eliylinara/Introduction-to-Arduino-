// C++ code
//
void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(8, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(11, OUTPUT);
  
}

void loop()
{
  if( digitalRead(2)==LOW){
    
  digitalWrite(8, HIGH);
  delay(20000); // Green LED lighted for 20 seconds
  digitalWrite(8, LOW);
  delay(0); // Wait for 0 seconds 
    
  digitalWrite(11, HIGH);
  delay(10000); // Yellow LED lighted for 10 seconds
  digitalWrite(11, LOW);
  delay(0); // Wait for 0 seconds
    
  digitalWrite(13, HIGH);
  delay(25000); // Red LED lighted for 25 seconds
  digitalWrite(13, LOW);
  delay(0); // Wait for 0 seconds
    
 
  }  
     
  
}