// Establecer el brillo del LED especificado por el valor de la entrada analógica
const int LED = 10;

int val = 0;

void setup() {
  pinMode (10, OUTPUT);
}

void loop() {
  val = analogRead (0);
  analogWrite (LED, val/4);
  delay (10);
}
