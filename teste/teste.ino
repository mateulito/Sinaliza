int verde = 2000;
int amarelo = 2000;
int vermlelho = 2000;
bool aberto = true;

void setup(){
  pinMode(13, OUTPUT);  
}

void loop(){
  if (aberto){
    fecha();
    delay(vermlelho);
  }else if (aberto == false)
  {
    abre();
    delay(verde);
  }
}

void abre(){
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(amarelo);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  aberto = true;
}

void fecha() {
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
  aberto = false;
}
