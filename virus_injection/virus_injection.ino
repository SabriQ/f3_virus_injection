int ON = 2;
int led = 3;
int pulse = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(ON, INPUT);
  pinMode(led, OUTPUT);
  pinMode(pulse, OUTPUT);
  digitalWrite(led, LOW);
  digitalWrite(pulse, LOW);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int ON_signal = digitalRead(ON);
  Serial.println(ON_signal);
  if (ON_signal == 1) {
    digitalWrite(led, HIGH);
    digitalWrite(pulse, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    digitalWrite(pulse, LOW);
    delay(500);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(pulse, LOW);
  }
}
