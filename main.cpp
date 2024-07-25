int x; 

//should work on any microcontroller, just connect them to the correct pins. change them to what you need
const int dir = 38;
const int step = 37;
const int en = 36;

void setup() 
{
  pinMode(en,OUTPUT);
  pinMode(step,OUTPUT);
  pinMode(dir,OUTPUT);
  
  digitalWrite(en,LOW);
}

void loop() 
{
  digitalWrite(dir,HIGH);   // this line makes it spin CW
                           //spin CW
  for(x = 0; x < 200; x++)
  {
    digitalWrite(step,HIGH);
    delay(1);
    digitalWrite(step,LOW);
    delay(1);
  }
                             //wait to spin CCW now
  delay(1000); 
  digitalWrite(dir,LOW);   // this line makes it spin CCW
  for(x = 0; x < 200; x++)
  {
    digitalWrite(step,HIGH);  
    delay(1);
    digitalWrite(step,LOW);
    delay(1);
  }
  delay(1000);
  
}
