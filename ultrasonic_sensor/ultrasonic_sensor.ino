const int trig = 11;
const int echo = 12;

const int dist_real = 15;

long duration;
float dist;
float err;
float ef;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin (9600);

}

void loop() {
  // Clear trig pin
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  // trigger signal
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);

  // Reading the echo pin
  duration = pulseIn(echo, HIGH);
  dist = (float)duration/58;

  /*err = abs(dist_real - dist);
  ef = (float)err / (float)dist_real;*/
  
  Serial.println (dist);
  delay(60);

}
