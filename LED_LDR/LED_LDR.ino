//LED parpadeando a la velocidad especificada por el valor de la entrada analógica<
const int LED = 13;

int val = 0;

void setup() {
  pinMode (LED, OUTPUT);
  // los pines analógicos se establecen automáticamente como pines de entrada
}

void loop() {
  val = analogRead (0);
  digitalWrite (LED, HIGH);
  delay (val);
  digitalWrite (LED, LOW);
  delay (val);
}
