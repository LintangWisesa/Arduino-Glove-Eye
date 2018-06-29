int ledPin = 12;  
int buzzerPin = 13;
int echo = 5;
int trig = 6;
long duration, cm;

void setup() {
    pinMode(ledPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
    pinMode(echo, INPUT);
    pinMode(trig, OUTPUT);
}

void loop()
{
    digitalWrite(trig, HIGH);
    delayMicroseconds(5);
    digitalWrite(trig, LOW);
    duration = pulseIn(echo, HIGH);
    cm = duration/58;

    if (cm<100){
    digitalWrite(ledPin,HIGH);
    digitalWrite(buzzerPin,HIGH);
    delay(100);
    }
    
    else{
    digitalWrite(ledPin,LOW);
    digitalWrite(buzzerPin,LOW);
    }
}