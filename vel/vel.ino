int ENA=6;
int ENB=5;
void setup()
{
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(ENA,OUTPUT);
}

void loop()
{
  //adelante derecha
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  analogWrite(ENA,255);
  analogWrite(ENB,255);// 0-255
  //delay(1000);
  //atras derecha
  //digitalWrite(10,HIGH);
  //digitalWrite(9,LOW);
  //digitalWrite(8,HIGH);
  //digitalWrite(7,LOW);
  //analogWrite(ENA,180);
  //analogWrite(ENB,180);// 0-255
 // delay(1000);
  
//adelante izquierda

  //delay(1000);
 
  
}
