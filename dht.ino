#include <DHT.h>

void setupDHT() {
  dht.begin();
  display.clearDisplay();
  display.setCursor(0, 30);
  display.println("DHT siap.");
  display.display();
  delay(3000);
}

void loopDHT() {
  h = dht.readHumidity();
  t = dht.readTemperature();

  if (isnan(h) || isnan(t)) {  // Fungsi `isnan()` mengembalikan true jika parameter adalah nilai NaN.
    display.clearDisplay();
    display.setTextSize(1);
    display.setTextColor(SSD1306_WHITE);
    display.setCursor(0, 30);
    display.println("Gagal membaca DHT!");
    display.display();
    return;
  }
}
