// ESP32-S3-DevKitC-1 (clone, N8R8 / N16R8) + Ai-Thinker Ra-02 (SX1278, 410-525 MHz)
//
// Wiring (Ra-02 -> ESP32-S3 GPIO):
//   VCC  -> 3V3   (3.3 V only!)
//   GND  -> GND
//   NSS  -> 10
//   MOSI -> 11
//   SCK  -> 12
//   MISO -> 13
//   RST  -> 9
//   DIO0 -> 14
//   DIO1 -> not needed (SX127x uses DIO0 as IRQ)
//
// Optional extras:
//   OLED SSD1306/SH1106 (I2C): SDA -> 17, SCL -> 18
//   GPS (NEO-6M etc., UART):   GPS TX -> 15 (ESP RX), GPS RX -> 16 (ESP TX)
//   User button: BOOT button (GPIO0)

// ---- LoRa: SX1278 via RadioLib RF95/SX127x driver ----
#define USE_RF95 // RFM95/SX127x

#define LORA_SCK 12
#define LORA_MISO 13
#define LORA_MOSI 11
#define LORA_CS 10

#define LORA_RESET 9
#define LORA_DIO0 14
#define LORA_DIO1 RADIOLIB_NC // not used for SX127x
#define LORA_DIO2 RADIOLIB_NC

// ---- I2C (optional OLED / sensors) ----
#define I2C_SDA 17
#define I2C_SCL 18
#define USE_SSD1306

// ---- GPS (optional) ----
#define GPS_RX_PIN 15
#define GPS_TX_PIN 16

// ---- Button ----
#define BUTTON_PIN 0 // BOOT button
#define BUTTON_NEED_PULLUP
