// C++ code
//
int gasSensor=A1;
int buzzer=13;
int led=12;
int motor=5;


void setup()
{
  pinMode(gasSensor, INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(led,OUTPUT);
  pinMode(motor,OUTPUT);
  Serial.begin(9600);
}



void loop()
{
  int sensorValue=analogRead(A1);
  Serial.print("GAS SENSOR LEVEL: ");
  Serial.println(sensorValue);
  delay(2000); // Wait for 2000 millisecond(s)
  
  if(sensorValue>200) //if sensor level detects above 200 buzzer sound will produce
  {
    digitalWrite(buzzer,HIGH);// buzzer will turn on
    
	digitalWrite(led,HIGH); // led will glow
    
    digitalWrite(motor,HIGH);// exhaust fan will turn on
  }
  else
  {
    digitalWrite(buzzer,LOW);
    digitalWrite(led,LOW);
    digitalWrite(motor,LOW);
  }
}