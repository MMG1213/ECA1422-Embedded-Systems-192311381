//Name: B.Lakshmi Anjali
//Reg No:192311344
//Embedded System:ECA1407

int trigPin = 4;
int echoPin = 5;

void setup()
{
    Serial.begin(9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop()
{
    long duration, distance;

    digitalWrite(trigPin, HIGH);
    delayMicroseconds(1000);
    digitalWrite(trigPin, LOW);

    duration = pulseIn(echoPin, HIGH);
    distance = (duration / 2) / 29.1;

    Serial.print(distance);
    Serial.println("CM");

    delay(10);
}