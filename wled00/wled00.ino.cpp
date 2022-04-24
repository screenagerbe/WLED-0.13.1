# 1 "C:\\Users\\SCREEN~1\\AppData\\Local\\Temp\\tmp8j79jkij"
#include <Arduino.h>
# 1 "D:/git/WLED-0.13.1/wled00/wled00.ino"
# 13 "D:/git/WLED-0.13.1/wled00/wled00.ino"
#include "wled.h"
void setup();
void loop();
#line 15 "D:/git/WLED-0.13.1/wled00/wled00.ino"
void setup() {
  WLED::instance().setup();
}

void loop() {
  WLED::instance().loop();
}