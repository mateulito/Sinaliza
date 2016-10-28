int verde = 0;
int amarelo = 5000;
int vermelho = 0;
int tempo = 1000;
//variavel para indicar congestionamento, sera substituido por um valor variavel de proporcoes em relacao aos outros apliances fornecido pela central
bool cong = true;
bool abertura = true;

void setup(){
  pinMode(13, OUTPUT);  
}

void loop(){
  chkcong();
  if(cong){
    abre();
    tempo -= 50;
    }
  }else{
    tempo += 50;
  }
}

void abre(){
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  delay(amarelo);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);  
}

void fecha() {
  digitalWrite(13, LOW);
  digitalWrite(11, HIGH);
}

bool chkcong(){
  if(tempo > 2000){
    congestionado = true;
  }else if(tempo < 100){
    congestionado = false;
  }
}

