int led = 13;
int rled = 12;

void setup()
{
    pinMode(led, OUTPUT);
    pinMode(rled, OUTPUT);
}

void loop()
{
    digitalWrite(led, HIGH);
    digitalWrite(rled, HIGH);
}