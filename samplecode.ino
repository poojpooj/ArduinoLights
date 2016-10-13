#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel strip = Adafruit_NeoPixel(num8 PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show();
}

void loop() {
  strip.setPixelColor(0,0,0,255);
  strip.setPixelColor(1,255,0,0);
  strip.setPixelColor(2,255,0,255);
  strip.setPixelColor(3,0,255,0);
  strip.setPixelColor(4,0,255,255);
  strip.setPixelColor(5,255,255,0);
  strip.setPixelColor(6,0,255,0);
  strip.setPixelColor(7,0,0,255);

  strip.show();
  delay(100);
}

