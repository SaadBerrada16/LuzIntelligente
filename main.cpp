int digitalPinIn = A4; // KY-026 analog interface
int digitalPinOut = A5; // KY-026 analog interface
int digitalVal; // digital readings

void setup()
{
pinMode(digitalPinIn, INPUT);
pinMode(digitalPinOut, OUTPUT);
digitalWrite(digitalPinOut, LOW);
}

void loop()
{
// lire la valeur retourné par le capteur de lumière
digitalVal = digitalRead(digitalPinIn);
if (digitalVal == 0){ // lorsque la capteur détecte une présence
digitalWrite(digitalPinOut, LOW); // allumer LED verte
} else {
digitalWrite(digitalPinOut, HIGH); // éteindre LED verte
}
delay(100);
}
