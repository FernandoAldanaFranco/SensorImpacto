int Led = 13;  // LED on Arduino board 
//int Shock = 3;  // sensor signal
int Shock = A0;  // sensor signal
int val;    // numeric variable to store sensor status
void setup()
{
  pinMode(Led, OUTPUT);   // define LED as output interface
  //pinMode(Shock, INPUT);  // define input for sensor signal
  Serial.begin(9600);
}
void loop()
{
  //val = digitalRead(Shock); // read and assign the value of digital interface 3 to val
  val = analogRead(Shock); // read and assign the value of digital interface 3 to val
  Serial.println(val);
  /*if(val == HIGH) // when sensor detects a signal, the LED flashes
  {
    digitalWrite(Led, LOW);
  }
  else
  {
    digitalWrite(Led, HIGH);
  }*/
  delay(100);
}
