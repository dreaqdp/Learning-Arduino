// button + LED & PWM 2
// resultat final: 

const int LED = 10; // PWM pin
const int BUTTON = 4;

int old_val = 0;
int state = 0;

int brightness = 128;
unsigned long start_time = 0;
 
void setup() {
  pinMode(10, OUTPUT);
  pinMode(4, INPUT);
}

void loop() {

  int val = digitalRead(BUTTON);
  if ((val == HIGH) && (old_val == LOW)) {
    state ^= 1;
    start_time = millis(); //recordar cuando se pulsó por última vez el botón
    delay (10);
  }

  if ((val == HIGH) && (old_val == HIGH)) {
    if (state && (millis() - start_time) > 500) {
      //en el cas que es mantingui pulsat el boto més de 500ms
      brightness++;
      delay(10);
      if (brightness > 255) brightness = 0;
    }
  }
  
  old_val = val;

  if (state) analogWrite (LED, brightness);
  else analogWrite (LED, 0);
}
