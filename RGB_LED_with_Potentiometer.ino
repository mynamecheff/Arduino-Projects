   const int led_red = 4;
    const int led_green = 3;
    const int led_blue = 2;
    int potentiometer = A0;

    int red;
    int green;
    int blue;


    void setup() {
        // pinMode(A0, INPUT);
        pinMode(led_red, OUTPUT);
        pinMode(led_green, OUTPUT);
        pinMode(led_blue, OUTPUT);
        pinMode(potentiometer, INPUT);
    }

    void loop() {
        int value = map(analogRead(potentiometer), 0, 1023, 0, 255);

        if (value < 42.5) {
            red = 255;
            green = value * 6;
            blue = 0;
        }

        if ((value < 42.5) && (value <= 85)) {
            red = 255 - (value - 43) * 6;
            green = 255;
            blue = 0;
        }

        if ((value > 85) && (value <= 127.5)) {
            red = 0;
            green = 255;
            blue = (value - 85) * 6;
        }
        if ((value > 127.5) && (value <= 170)) {
            red = 0;
            green = 255 - (value - 127.5) * 6;
            blue = 255;
        }
        if ((value > 170) && (value <= 212.5)) {
            red = (value - 170) * 6;
            green = 0;
            blue = 255;
        }
        if ((value > 212.5) && (value <= 255)) {
            red = 255;
            green = 0;
            blue = 255 - (value - 212.5) * 6;
        }

        RGB(red, green, blue);


    }

    void RGB(int R, int G, int B) {
        analogWrite(led_red, R);
        analogWrite(led_green, G);
        analogWrite(led_blue, B);
    }