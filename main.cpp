int digitalPin = 4;
int analogPin = A0; // KY-026 analog interface
int digitalVal; // digital readings
int analogVal; //analog readings
 
void setup()
{
pinMode(digitalPin, OUTPUT);
digitalWrite(digitalPin, LOW);
}
 
void loop()
{
// lire la valeur retourné par le capteur de lumière
analogVal = analogRead(analogPin);
if (analogVal>670){ // lorsque la capteur lumière détecte une luminosité très basse
digitalWrite(digitalPin, HIGH); // allumer LED rouge
} else {
digitalWrite(digitalPin, LOW); // éteindre LED rouge
}
delay(100);
}
