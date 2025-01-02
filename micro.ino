#include <FS.h>
#include <SD.h>

void setupSDCard() {
  display.clearDisplay();
  display.setCursor(0, 30);
  display.println("Inisialisasi SD card");
  display.display();
  delay(3000);
  if (!SD.begin(5)) {
    display.clearDisplay();
    display.setCursor(0, 30);
    display.println("SD card gagal!");
    display.display();
    while (1);
  }
  display.clearDisplay();
  display.setCursor(0, 30);
  display.println("SD card siap.");
  display.display();
  delay(2000);
}

void loopSDCard() {
  if (millis() - waktuMenyimpan >= 5000) {
    char buffer[25];
    sprintf(buffer, "%4d/%02d/%02d %02d:%02d:%02d",
            now.year(), now.month(), now.day(),
            now.hour(), now.minute(), now.second());

    myFile = SD.open("/coba.txt", FILE_APPEND);
    if (myFile) {
      myFile.print(buffer);  // Tulis waktu
      myFile.print(", Suhu: ");
      myFile.print(t);       // Tulis suhu
      myFile.print("° C, Kelembapan: ");
      myFile.print(h);       // Tulis kelembapan
      myFile.println(" %");
      myFile.close();
      notifPesan = "Data tersimpan ke SD.";
      tampilkanNotif = true;  // Aktifkan notifikasi sukses
    } else {
      notifPesan = "Gagal menyimpan data!";
      tampilkanNotif = true;  // Aktifkan notifikasi gagal
    }
    waktuMenyimpan = millis();
  }
}
