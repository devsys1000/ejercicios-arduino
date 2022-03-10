void setup() {
  // inicializamos pin como entrada para Pulsador
  pinMode(2, INPUT);
  // inicializamos el pin como salida para el Led
  pinMode(3, OUTPUT);
}

void loop() {
  // leemos el pin Pulsador determinar estado, evaluamos
  // mediante un if el estado del Pulsador para controlar el Led
  if(digitalRead(2)==HIGH){
    digitalWrite(3, HIGH);
    }
  else{
    digitalWrite(3, LOW);
    }
}
