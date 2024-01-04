// Advanced Microcontroller-based Audio Workshop
//
// http://www.pjrc.com/store/audio_tutorial_kit.html
// https://hackaday.io/project/8292-microcontroller-audio-workshop-had-supercon-2015
// 
// Part 1-2: Test Hardware
//
// Simple beeping is pre-loaded on the Teensy, so
// it will create sound and print info to the serial
// monitor when plugged into a PC.
//
// This program is supposed to be pre-loaded before
// the workshop, so Teensy+Audio will beep when
// plugged in.


// check this shit out!
// https://randomnerdtutorials.com/guide-for-oled-display-with-arduino/

#include <Audio.h>
#include <Wire.h>
#include <SD.h>
#include <SPI.h>
#include <SerialFlash.h>
#include <Bounce.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
#define OLED_RESET     -1 // Reset pin # (or -1 if sharing Arduino reset pin)
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

AudioSynthWaveform    waveform1;
AudioOutputI2S        i2s1;
AudioConnection       patchCord1(waveform1, 0, i2s1, 0);
AudioConnection       patchCord2(waveform1, 0, i2s1, 1);
AudioControlSGTL5000  sgtl5000_1;


int count=1;
int a1history=0, a2history=0, a3history=0;
int waveFrequency = 0;

void setup() {
  Serial.begin(115200);
  AudioMemory(10);

  Serial.begin(115200);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.8);
  waveform1.begin(WAVEFORM_SINE);
  delay(1000);

  a1history = analogRead(A1);




  // display part
    // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { 
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }

  showWaveFrequency();
}




void loop() {
  Serial.println(waveFrequency);
  waveform1.frequency(waveFrequency);
  waveform1.amplitude(0.9);
  wait(250);
  /*Serial.print("Beep #");
  Serial.println(count);
  count = count + 1;
  waveform1.frequency(440);
  waveform1.amplitude(0.9);
  
  waveform1.amplitude(0);
  wait(1750);
  */
}

void wait(unsigned int milliseconds)
{
  elapsedMillis msec=0;

  while (msec <= milliseconds) {
    int a1 = analogRead(A1);

    
    if (a1 > a1history + 50 || a1 < a1history - 50) {
      Serial.print("Knob (pin A1) = ");
      Serial.println(a1);
      a1history = a1;
      //waveFrequency = a1/12;
      waveFrequency = map(a1, 0, 1023, 0, 100);
      Serial.println(waveFrequency);
      showWaveFrequency();
    }

  }
}

void showWaveFrequency(void) {
  // adapt this to millis probably?
  /*display.clearDisplay();

  display.setTextSize(2); // Draw 2X-scale text
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println(F("freq: "+waveFrequency));
  display.display();      // Show initial text*/
  //delay(100);

  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  // Display static text
  display.print("Frequency: ");
  display.println(String(waveFrequency));
  //display.drawLine(0, 64, 0, 50, WHITE);
  //display.drawLine(0, 50, 50, 60, WHITE);
  display.display(); 
  delay(100);
}
