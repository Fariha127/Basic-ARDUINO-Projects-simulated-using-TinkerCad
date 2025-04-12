#include <Adafruit_NeoPixel.h>

#define PIN 6
#define N_LEDS 4

Adafruit_NeoPixel strip = Adafruit_NeoPixel(N_LEDS, PIN, NEO_GRB + NEO_KHZ800);

static void chase(uint32_t c); // Function prototype

void setup()
{
  strip.begin();
  strip.show(); // Initialize all LEDs to 'off'
}

void loop()
{
  chase(strip.Color(255, 0, 0)); // Red
  chase(strip.Color(0, 255, 0)); // Green
  chase(strip.Color(0, 0, 255)); // Blue
}

static void chase(uint32_t c)
{
  for (uint16_t i = 0; i < strip.numPixels() + 4; i++)
  {
    strip.setPixelColor(i, c); // Corrected function name
    strip.setPixelColor(i - 4, 0); // Turn off previous LED
    strip.show();
    delay(25);
  }
}
