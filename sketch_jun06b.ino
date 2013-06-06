int pintranzystor = 5;

int pinguzik = 3;

int stan_guzika = 0;

void setup()
{
   pinMode(pintranzystor, OUTPUT);
   
   pinMode(pinguzik, INPUT);
  
}

void loop()
{
  stan_guzika = digitalRead(pinguzik);
  
  if(stan_guzika == HIGH)
  {
   digitalWrite(pintranzystor, HIGH);   
  }else
  {
   digitalWrite(pintranzystor, LOW);
 }
}
