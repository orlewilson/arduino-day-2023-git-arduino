/*
Arduino Day 2023

Oficina:      Git + Arduino
Facilitador:  Orlewilson Bentes Maia
Autor:        informe seu nome
Data:         19/03/2023
*/

// Porta digital no qual sera colocado um LED para ser ligado e desligado
int led = 13;

void ligarLed() {
  // Funcao do Arduino para ligar o LED (colocar nivel alto, ou seja, 5V)
  digitalWrite(led, HIGH);
}

void desligarLed(){
  // Funcao do Arduino para desligar o LED (colocar nivel baixo, ou seja, 0V)  
  digitalWrite(led, LOW);
}
// Funcao para configurar o Arduino
void setup() {                

  // Indica qual porta digital sera utilizada como saida (ligar/desligar um LED)
  pinMode(led, OUTPUT);     
}

// Funcao principal do Arduino que ficara em loop infinito
void loop() {
  
  ligarLed();

  // Funcao do Arduino para parar durante um certo tempo em milisegundos (ms)
  delay(1000); // 1 segundo

  desligarLed();
  
  // Funcao do Arduino para parar durante um certo tempo em milisegundos (ms)
  delay(1000); // 1 segundo
}
