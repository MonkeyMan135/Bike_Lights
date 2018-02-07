/*
 This is as realistic as I could get it and was made by me and me only. Please if you use this code, cite them to here or put "@MonkeyMan135".
 this goes with my futura project and this is the turning signals part.
 -MonkeyMan135
*/  
void setup()
{
  pinMode(5, INPUT);
  pinMode(12, OUTPUT);
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  if (digitalRead(5) == HIGH) {
    digitalWrite(12, HIGH);
    delay(310); // Wait for 500 millisecond(s)
    digitalWrite(12, LOW);
    delay(310); // Wait for 500 millisecond(s)
  } else {
    digitalWrite(12, LOW);
  }

  if (digitalRead(4) == HIGH) {
    digitalWrite(2, HIGH);
    delay(310); // Wait for 500 millisecond(s)
    digitalWrite(2, LOW);
    delay(310); // Wait for 500 millisecond(s)
  } else {
    digitalWrite(2, LOW);
  }
}
