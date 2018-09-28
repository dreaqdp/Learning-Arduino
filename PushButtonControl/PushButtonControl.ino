//Example 2: Encender LED con un botón

const int LED = 10;
const int BUTTON = 4;

int state = 0;
int old_val = 0;

void setup () {
  pinMode (LED, OUTPUT); // establir el pin 13 com a sortida
  pinMode (BUTTON, INPUT);
}

void loop () {
  int val = digitalRead(BUTTON);
  if (val == HIGH && old_val == LOW) {
    state = 1 - state;
    delay (25);
  }
  old_val = val;
  
  if(state == 1) digitalWrite (LED, HIGH);
  else digitalWrite (LED, LOW);
}
  
