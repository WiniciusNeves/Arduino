// C++ code
//
void setup()
{
	Serial.begin(9600);
  	pinMode(7 , OUTPUT);
}

void loop()
{
  float leitura = analogRead(A0);

	Serial.print("A leitura e:");
    Serial.println(leitura);
  
  if(leitura>700){
  	digitalWrite(7, HIGH);
    
  }else{
  digitalWrite(7,LOW);
  }
  
  

}
