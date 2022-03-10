/* PRIMER PROGRAMA ENCENDIDO DE LED PIN 13 */
//configuracion de comportamiento de pines
void setup() {
  // modo de pin config como salida
  pinMode(13, OUTPUT);
  
}

//accion de comportamiento de programa
void loop() {
  // se escribe el pin digital como encendido
  digitalWrite(13, HIGH);
  //retardo de accion de pin en miliseg
  delay(500);

  digitalWrite(13, LOW);
  delay(500);
}
