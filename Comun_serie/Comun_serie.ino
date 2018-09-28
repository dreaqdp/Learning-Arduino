// Enviar al equipo los valores leídos de la entrada analógica 0
// Comunicación serie

const int SENSOR = 0;

int val = 0; // guardar valor del sensor

void setup() {
  Serial.begin (9600); // abrir puerto serie para enviar los datos de nuevo
    // al equipo a 9600 bps
}

void loop() {
  val = analogRead (SENSOR);
  Serial.println (val); // imprimir el valor para el puerto serie
  delay (100); // esperar 100 ms entre envíos
}
