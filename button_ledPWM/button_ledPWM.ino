// button + LED & PWM
// resultat final: apretes i augmenta la seva intensitat progressivament fins el màx, tornes a apretar i la decrementa fins apagarse. 
// Quan ha assolit el punt max o min es manté en aquella intensitat
const int LED = 10; // PWM pin
const int BUTTON = 4;
int old_val = 0;
int state = 0;
int i = 0;
void setup() {
  pinMode(10, OUTPUT);
  pinMode(4, INPUT);
}

void loop() {
  int val = digitalRead(BUTTON);
  if (val == HIGH && old_val == LOW) {
    state ^= 1;
    delay (25);
  }

  old_val = val;

  if (state && i < 255) i++;
  else if (!state && i > 0)i--;
  analogWrite (LED, i);
  delay(10);
  
}
