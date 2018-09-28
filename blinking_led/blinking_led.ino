//Example 1: Blinking LED

const int LED = 13;

void setup () {
  pinMode (LED, OUTPUT); // establir el pin 13 com a sortida
}

void loop () {
  digitalWrite (LED, HIGH);
  delay (1000);
  digitalWrite (LED, LOW);
  delay (1000);
}
  
