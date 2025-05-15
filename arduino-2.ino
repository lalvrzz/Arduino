primer codigo
void setup(){
    pinMode(2, INPUT);         // pin 2 como entrada
    pinMode (3, OUTPUT);       // pin 3 como salida
    }
    
    void loop() {
      if (digitalRead(2)== HIGH){ // evaluo si la entrada esta a nivel alto
      digitalWrite(3, HIGH);     //enciendo lED
      }
      else {
        digitalWrite(3, LOW); // apago  el LED
    }
    }
 

    segundo codigo
    int LED = 3;
int ESTADO = LOW;

void setup() {
 pinMode(PULSADOR, INPUT);  // pin 2 como entrada
 pinMode(LED, OUTPUT);     // pin 3 como salida

}

void setup() {
 while(digitalRead(PULSADOR) == LOW){ // espero a que el pulsador se presione

  }
ESTADO = digitalRead(LED);           // leo el estado del LED
digitalWrite(LED, !ESTADO);          // escribo valor contrario
while(digitalRead(PULSADOR) == HIGH){ // antirebote
  }
}

tercer codigo

int LED = 3;
int ESTADO = LOW;

void setup() {
 pinMode(PULSADOR, INPUT);  // pin 2 como entrada
 pinMode(LED, OUTPUT);     // pin 3 como salida

}

void setup() {
 while(digitalRead(PULSADOR) == LOW){ // espero a que el pulsador se presione

  }
ESTADO = digitalRead(LED);           // leo el estado del LED
digitalWrite(LED, !ESTADO);          // escribo valor contrario
while(digitalRead(PULSADOR) == HIGH){ // antirebote
  }
}

