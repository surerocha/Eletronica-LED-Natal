// C++ code
//Primeira versão do Projeto sem o módulo sensor de som
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

int s = 0;

void loop()
{
  for (int i = 0; i < 10; i++){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    delay(500); 
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    delay(500); 
  }
   for (int i = 0; i < 10; i++){
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    delay(750);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    delay(750);
   }
    digitalWrite(12, LOW);
    digitalWrite(7, LOW);
   for (int i = 0; i < 30; i++){
    digitalWrite(13, HIGH);
    delay(250 + s);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(250 + s);
    digitalWrite(12, LOW);
    digitalWrite(8, HIGH);
    delay(250 + s);
    digitalWrite(8, LOW);
    digitalWrite(7, HIGH);
    delay(250 + s);
    digitalWrite(7, LOW);
    if(i > 10){
       s = -100;
    }
   }
   for (int i = 0; i < 15; i++){
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    delay(100); 
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    delay(100); 
   }
}
