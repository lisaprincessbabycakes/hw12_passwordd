const int button1Pin = 2;
const int button2Pin = 3;
const int potPin = A0;
const int successLED = 10;
const int failLED = 11;

void setup() {
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(successLED, OUTPUT);
  pinMode(failLED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int button1State = digitalRead(button1Pin);
  int button2State = digitalRead(button2Pin);
  int potValue = analogRead(potPin);

  // Debugging: Print button states and potentiometer values
  Serial.print("Button 1: ");
  Serial.print(button1State);
  Serial.print(" Button 2: ");
  Serial.print(button2State);
  Serial.print(" Pot: ");
  Serial.println(potValue);

  if (button1State == HIGH) {
    digitalWrite(successLED, HIGH); // Turn on Green LED
    delay(200);
    digitalWrite(successLED, LOW);
  }

  if (button2State == HIGH) {
    digitalWrite(failLED, HIGH); // Turn on Red LED
    delay(200);
    digitalWrite(failLED, LOW);
  }

  delay(100);
}


