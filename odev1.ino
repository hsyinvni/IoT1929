int led[]= {13,12,11,10,9};
void setup()
{
  for(int i=0; i<5; i++)
    {
      pinMode(led[i], OUTPUT);
    }
  
}

void loop()
{
  for(int i=0; i<5; i++)
    {
      digitalWrite(led[i], HIGH);
        delay(500);
      digitalWrite(led[i], LOW);
        
   
    }
      
  
  for(int j=4; j>=0; j--)
    {
      digitalWrite(led[j], HIGH);
        delay(500);
      digitalWrite(led[j], LOW);
    }

      
   
      
}
