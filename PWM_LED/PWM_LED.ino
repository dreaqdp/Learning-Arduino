// Modificar intensidad de un LED mediante el PWM
const int LED = 11;

void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  int i;
  for (i = 0; i < 255; i++) {
    analogWrite (LED, i); // determinar duty cicle del PWM con el bucle augmentándola
    delay (10);
  }

  for (i = 255; i > 0; i--) {
    analogWrite (LED, i);
    delay (10);
  }
}
