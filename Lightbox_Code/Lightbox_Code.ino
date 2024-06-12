#include <Adafruit_NeoPixel.h>
#define PIN        9 // On Trinket or Gemma, suggest changing this to 1
#define NUMPIXELS 16 // Popular NeoPixel ring size


Adafruit_NeoPixel pixels (NUMPIXELS, 9, NEO_GRB + NEO_KHZ800);

//#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels
int x;
int y;
int z;
int l;



void setup() {
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
   Serial.begin(9600);
}

void loop() {
   pixels.setBrightness(l/12);

  x = analogRead(5);
  y = analogRead(4);
  z = analogRead(2);
  l = analogRead(2);
  
   Serial.println(x);
   Serial.println(y);
   Serial.println(z);
   Serial.println(l / 12);
   delay(100);
   pixels.clear();
  for (int l = 0; l < NUMPIXELS; l++) {
     pixels.setPixelColor(l, pixels.Color (x / 4, y / 4, z / 4));
   


    // delay(DELAYVAL); // Pause before next pass through loop
  }
  pixels.show();

}
