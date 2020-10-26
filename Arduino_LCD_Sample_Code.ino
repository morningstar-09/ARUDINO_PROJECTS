#include <LiquidCrystal.h>
LiquidCrystal display(12, 11, 5, 4, 3, 2);
void setup() {
display.begin(16, 2);
display.print("hello, world!");
}
void loop() {
display.setCursor(0, 1);
display.print(millis() / 1000);
}
