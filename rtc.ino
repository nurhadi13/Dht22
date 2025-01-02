#include <RTClib.h>

void setupRTC() {
  display.clearDisplay();
  display.setCursor(0, 30);
  display.println("Inisialisasi RTC");
  display.display();
  delay(3000);
  if (!rtc.begin()) {
    display.clearDisplay();
    display.setCursor(0, 30);
    display.println("RTC tidak terdeteksi!");
    display.display();
    while (1);
  }
  if (rtc.lostPower()) {
    display.println("RTC habis daya!");
    //rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
  display.clearDisplay();
  display.setCursor(0, 30);
  display.println("RTC siap.");
  display.display();
  delay(2000);
}

void loopRTC() {
  now = rtc.now() + TimeSpan(0, 11, 20, 30);
  char buffer[25];
  sprintf(buffer, "%4d/%02d/%02d %02d:%02d:%02d",
          now.year(), now.month(), now.day(),
          now.hour(), now.minute(), now.second());
  Serial.println(buffer);
}
