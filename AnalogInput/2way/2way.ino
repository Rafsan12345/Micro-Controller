
 int ldrPin = A0;

void setup() {

Serial.begin(9600);


pinMode(ldrPin, INPUT);

}

void loop() {

int ldrStatus = analogRead(ldrPin);


Serial.println(ldrStatus);


}
