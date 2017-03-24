
#include <SPI.h>
#include <Ethernet.h>

int verde = 2000;
int amarelo = 2000;
int vermlelho = 2000;
bool aberto = true;

byte mac[] = {
  0xDE, 0xAD, 0xBE, 0xEF, 0xFE, 0xED
};
IPAddress ip(10, 0, 0, 50);
IPAddress server(10, 0, 0, 10);
EthernetClient client;


void setup(){
  pinMode(13, OUTPUT);
  Ethernet.begin(mac, ip);
  Serial.begin(9600);
while (!Serial) {
  ;
}
  delay(5000);
  Serial.println("connecting...");

  if (client.connect(server, 10002)) {
    Serial.println("connected");
  } else {

    Serial.println("connection failed");
  }
}




void loop(){
  if (client.available()) {
  char c = client.read();
    if(c.compare(vermlelho = %)){
      
    }
  Serial.print();
}




  if (aberto){
    fecha();
  }else if !(aberto)
  {
    abre();
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

bool abertura(){
  if(verde > 0){
    aberto = true;
  }else if(vermlelho > 0){
    aberto = false;
  }
  return aberto;
}