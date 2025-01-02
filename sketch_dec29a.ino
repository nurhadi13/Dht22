#include <Adafruit_GFX.h> //library grafik oled
#include <Adafruit_SSD1306.h> //library oled
#include <DHT.h> //library dht
#include <RTClib.h> //library rtc
#include <FS.h> // Mengimpor pustaka FS (File System) 
#include <SD.h> // Mengimpor pustaka SD.


#define uS_TO_S_FACTOR 1000000ULL // Mendefinisikan faktor konversi dari mikrodetik (µs) ke detik (s). 
#define TIME_TO_SLEEP 100 // Mendefinisikan waktu tidur dalam satuan detik. Dalam hal ini, perangkat akan tidur selama 100 detik.           
RTC_DATA_ATTR int bootCount = 0; // Menyimpan variabel `bootCount` di memori RTC (Real-Time Clock). 
// RTC_DATA_ATTR memastikan nilai ini tetap tersimpan meskipun perangkat masuk ke mode deep sleep.


#define SCREEN_WIDTH 128  // Mendefinisikan lebar layar OLED dalam piksel (128 piksel).
#define SCREEN_HEIGHT 64  // Mendefinisikan tinggi layar OLED dalam piksel (64 piksel).
#define OLED_RESET -1     // Mendefinisikan pin reset OLED, diatur ke -1 jika tidak digunakan.
#define SCREEN_ADDRESS 0x3C // Alamat I2C untuk OLED, biasanya 0x3C untuk layar I2C berbasis SSD1306.

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET); // Membuat objek display 

#define DHTPIN 33         // Mendefinisikan pin mikrokontroler yang terhubung ke sensor DHT22 (GPIO 33).
#define DHTTYPE DHT22     // Mendefinisikan jenis sensor DHT yang digunakan, yaitu DHT22.

DHT dht(DHTPIN, DHTTYPE); // Membuat objek dht untuk mengakses sensor DHT22 yang terhubung ke pin DHTPIN (33) dengan tipe DHT22.

float t, h;              // Mendeklarasikan dua variabel float: 't' untuk menyimpan nilai suhu dan 'h' untuk menyimpan nilai kelembapan.

RTC_DS3231 rtc;          // Membuat objek rtc untuk mengakses modul RTC (Real-Time Clock) DS3231, digunakan untuk melacak waktu dan tanggal.
DateTime now;            // Membuat objek now untuk menyimpan waktu dan tanggal saat ini yang diperoleh dari RTC.

File myFile;             // Mendeklarasikan objek myFile untuk mengakses file yang akan dibaca atau ditulis di kartu SD.

unsigned long waktuMenyimpan = 0;  // Waktu terakhir data disimpan
unsigned long notifTersimpan = 0; // Waktu terakhir notifikasi ditampilkan
bool tampilkanNotif = false;          // Status untuk menampilkan notifikasi
String notifPesan = "";

void print_wakeup_reason();

void setup() {
  Serial.begin(9600);
  setupOLED();
  setupDHT();
  setupRTC();
  setupSDCard();
  perkenalan();
}

void loop() {
  espmautidur();
  loopDHT();
  loopRTC();
  loopSDCard();
  displayData();
  delay(800);
  espTURU();  
}
