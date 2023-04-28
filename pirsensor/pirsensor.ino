const int ledPin= 13;
const int inputPin= 2;

void setup(){
  Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(inputPin, INPUT);
}

void loop(){
  Serial.println(inputPin);
int value= digitalRead(inputPin);

if (value == HIGH)
{
digitalWrite(ledPin, HIGH);
delay(1000);
digitalWrite(ledPin, LOW);
}
else
{
digitalWrite(ledPin, LOW);
}
}
