// C++ code
//
int TRIGGER = 9;
int ECHO = 8;
  
void setup()
{
 Serial.begin(9600);
 pinMode(TRIGGER, OUTPUT);
 pinMode(ECHO, INPUT);
 pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(TRIGGER, HIGH);
  delayMicroseconds(10); 
  digitalWrite(TRIGGER, LOW);
  
  int time = pulseIn(ECHO,HIGH);
  
    int distance = (0.034*time)/2;
    Serial.print("A distancia e ");
    Serial.println(distance); 
    delay(1000); 
  
  if (distance < 20)
  {
   digitalWrite(7, HIGH);
  }
  else
  {
   digitalWrite(7, LOW);
  }
}
