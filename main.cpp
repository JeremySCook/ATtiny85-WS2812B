//modified from code found here: https://github.com/prosperv/PlatformIO-Neopixel/blob/master/src/main.cpp
//by Jeremy S. Cook 12/20/2019

#include <Arduino.h>
#include <Adafruit_NeoPixel.h>


// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)

#define DATA_PIN 0
const int numOfLeds=3;
const int brightness=10;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(numOfLeds, DATA_PIN, NEO_GRB + NEO_KHZ800);


void setup() {
    strip.begin();
}
void loop() {
    // Turn led on one by one
    for(int x=0;x<numOfLeds;x++){
        strip.setPixelColor(x,brightness,0,0);
        strip.show();
        delay(20);
    }
    delay(500);
    for(int x=0;x<numOfLeds;x++){
        strip.setPixelColor(x,0,brightness,0);
        strip.show();
        delay(20);
    }
    delay(500);
    for(int x=0;x<numOfLeds;x++){
        strip.setPixelColor(x,0,0,brightness);
        strip.show();
        delay(20);
    }
    delay(500);

    for(int x=0;x<numOfLeds;x++){
        strip.setPixelColor(x,0,0,0);
    }
    strip.show();
    delay(500);

}
