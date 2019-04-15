int red = D6;
int green = D5;
int blue = D4;

void setup() {
    Particle.function("choose_led", choose_led);
    pinMode(red, OUTPUT);
    pinMode(green, OUTPUT);
    pinMode(blue, OUTPUT);
}


int switch_led(int colour) {
    if (digitalRead(colour) == HIGH) {
        digitalWrite(colour, LOW);
    }
    else if (digitalRead(colour) == LOW) {
        digitalWrite(colour, HIGH);
    }
    return 0;
}

int choose_led(String led) {
  if (led == "red")
  {
    switch_led(red);
  }
  else if (led == "green")
  {
    switch_led(green);
  }
  else if (led == "blue")
  {
    switch_led(blue);
  }
  return 1;
}

void loop() {

}