#include <FastLED.h>

#define NUM_LEDS  150
#define LED_PIN   2

CRGB ledsb[NUM_LEDS];

void setup () {
    FastLED.addLeds<WS2812B, LED_PIN, GRB>(ledsb, NUM_LEDS);
    FastLED.setBrightness(50);
}

void loop () {
  fill_gradient_RGB(ledsb, NUM_LEDS, CRGB::Magenta, CRGB::Yellow);
  FastLED.show(); 
  delay(500); 
  
  fill_gradient_RGB(ledsb, NUM_LEDS, CRGB::Red, CRGB::Yellow, CRGB::Green, CRGB::Blue); 
  FastLED.show(); 
  delay(500); 
}
