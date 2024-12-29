#define RED 6
#define GREEN 5
#define BLUE 3
#define DELAY 10

void setup()
{
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);

    digitalWrite(RED, HIGH);
}

int redValue;
int greenValue;
int blueValue;

void loop()
{
    redValue = 255;
    greenValue = 0;
    blueValue = 0;
    for (int i = 0; i < 255; i++)
    {
        redValue--;
        greenValue++;
        analogWrite(RED, redValue);
        analogWrite(GREEN, greenValue);
        delay(DELAY);
    }

    redValue = 0;
    greenValue = 255;
    for (int i = 0; i < 255; i++)
    {
        greenValue--;
        blueValue++;
        analogWrite(GREEN, greenValue);
        analogWrite(BLUE, blueValue);
        delay(DELAY);
    }

    redValue = 0;
    greenValue = 0;
    blueValue = 255;
    for (int i = 0; i < 255; i++)
    {
        blueValue--;
        redValue++;
        analogWrite(BLUE, blueValue);
        analogWrite(RED, redValue);
        delay(DELAY);
    }
}
