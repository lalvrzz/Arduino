primer codigo
int LED = 3;
int BRILLO;

void setup() {
 pinMode(LED, OUTPUT);
}

void loop() {
 for (BRILLO = 0; BRILLO < 256; BRILLO++);{
    analogWrite(LED, BRILLO);
    delay(15); 
  }
  for (BRILLO = 255; BRILLO > 0; BRILLO--);{
    analogWrite(LED, BRILLO);
    delay(15);  
      }
  }

  segundo codigo
  int LED = 3;
int BRILLO;
int POT = 0;

void setup() {
 pinMode(LED, OUTPUT);
 // las entradas analgicas no requieren inivializacion
}

void loop() {
  BRILLO = analogRead (POT) / 4;
  analogWrite(LED, BRILLO);
  }
     