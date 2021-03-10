int led[]= {13,12,11,10,9};
int d = 500;
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
        delay(d);
      digitalWrite(led[i], LOW);
        
   
    }
      
  
  for(int j=4; j>=0; j--)
    {
      digitalWrite(led[j], HIGH);
        delay(d);
      digitalWrite(led[j], LOW);
    }

      
   
      
}
