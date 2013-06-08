int tablica[4] = { 4,5,6,7 };

void setup()
{
 pinMode(tablica[0], OUTPUT); 
 pinMode(tablica[1], OUTPUT);
 pinMode(tablica[2], OUTPUT);
 pinMode(tablica[3], OUTPUT);
}

void loop()
{
 if(tablica[0] == LOW && tablica[2] == LOW)
 {
   tablica[1] = HIGH;
   tablica[3] = HIGH;
 }else
 {
  tablica[0] = HIGH;
  tablica[2] = HIGH;
}
}
