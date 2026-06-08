int sensorPin = A0; 
int sensorValue = 0;
int led = 9;

void setup() 
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
} 

void loop()
{
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue < 150)
{
  Serial.println("Time to shine, it's dark!");
    digitalWrite(led,HIGH);
  } 
  else 
{
    Serial.println("No need for light, it's bright out!");
    digitalWrite(led, LOW);
  }
  delay(1000);
}