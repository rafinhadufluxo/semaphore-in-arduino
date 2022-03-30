void setup() {
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  digitalWrite(13,LOW);//vermelho
  digitalWrite(12,LOW);// amarelo
  digitalWrite(11,LOW); //verde
}




void loop() {
//  digitalWrite(13,LOW);//vermelho
//  digitalWrite(12,HIGH);// amarelo
//  digitalWrite(11,LOW); //verde
//
//  delay(2000);
//  digitalWrite(12,LOW);
//  digitalWrite(13,HIGH);
//  delay(5000);
//
//  digitalWrite(11,HIGH);
//  digitalWrite(13,LOW);
//  delay(5000);

  
 
  digitalWrite(12,LOW);//amarelo
  digitalWrite(13,HIGH);// vermelho
  digitalWrite(11,LOW); //verde

  delay(2000);
  digitalWrite(13,LOW); //desativa o pino digital 13
  delay(2000);
  digitalWrite(12,HIGH); //ativa o pino digital 12
  delay(5000);

  digitalWrite(12,LOW);
  delay(5000);
  digitalWrite(11,HIGH);
  delay(5000);
  
}
