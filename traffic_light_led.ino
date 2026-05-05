void setup() 
{
  pinMode(7, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() 
{
  digitalWrite(7, HIGH);  
  digitalWrite(12, HIGH); 
  digitalWrite(10, HIGH); 
  delay(100);                      
  digitalWrite(7, LOW);
   digitalWrite(12 , LOW);  
   digitalWrite(10 , LOW);  
  delay(100);                      
}
