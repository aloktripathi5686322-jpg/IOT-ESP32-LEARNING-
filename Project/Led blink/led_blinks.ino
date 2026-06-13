void setup()
{
  pinMode(6, OUTPUT);
}

void loop()
{
  digitalWrite(6, HIGH); // LED On
  delay(1000);           // 1 second wait
  digitalWrite(6, LOW);  // LED Off
  delay(1000);           // 1 second wait
}
