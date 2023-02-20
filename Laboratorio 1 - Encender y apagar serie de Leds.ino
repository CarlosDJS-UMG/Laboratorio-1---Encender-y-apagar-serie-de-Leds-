int led[8] = { 3, 4, 5, 6, 7, 8, 9, 10 };
int pinbtn = 2;
int x = 100;
int ns;

bool btn = LOW;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinbtn, INPUT);
  for (int i = 0; i < 8; i++) {
    pinMode(led[i], OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  btn = digitalRead(pinbtn);
  ns = Serial.read();
  if (btn == HIGH) {
    x = 100;
    for (int i = 0; i < 8; i++) {
      digitalWrite(led[i], HIGH);
      delay(x);
      digitalWrite(led[i], LOW);
      delay(x);
    }
  } else {
    for (int i = 0; i < 8; i++) {
      digitalWrite(led[i], HIGH);
    }
  }
  if (ns == '2') {
    x = 2000;
    for (int i = 0; i < 8; i++) {
      digitalWrite(led[i], HIGH);
    }
    delay(x);
    for (int i = 0; i < 8; i++) {
      digitalWrite(led[i], LOW);
    }
    delay(x);
    for (int i = 0; i < 8; i++) {
      digitalWrite(led[i], HIGH);
    }
    delay(x);
    for (int i = 0; i < 8; i++) {
      digitalWrite(led[i], LOW);
    }
    delay(x);
    for (int i = 0; i < 8; i++) {
      digitalWrite(led[i], HIGH);
    }
    delay(x);
    for (int i = 0; i < 8; i++) {
      digitalWrite(led[i], LOW);
    }
    delay(x);
  }
}
