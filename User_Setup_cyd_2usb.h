//                            USER DEFINED SETTINGS
//   Set driver type, fonts to be loaded, pins used and SPI control method etc
//
//   See the User_Setup_Select.h file if you wish to be able to define multiple
//   setups and then easily select which setup file is used by the compiler.
//
//   If this file is edited correctly then all the library example sketches should
//   run without the need to make any more changes for a particular hardware setup!
//   Note that some sketches are designed for a particular TFT pixel width/height


// ##################################################################################
//
// Section 1. Call up the right driver file and any options for it
//
// ##################################################################################

// Display type -  only define if RPi display
//#define RPI_DRIVER

// Only define one driver, the other ones must be commented out
//#define ILI9341_DRIVER // OG Marauder
//#define ST7735_DRIVER    // Marauder Mini
//#define ILI9163_DRIVER
//#define S6D02A1_DRIVER
//#define RPI_ILI9486_DRIVER
//#define HX8357D_DRIVER
//#define ILI9481_DRIVER
//#define ILI9486_DRIVER
//#define ILI9488_DRIVER
#undef ST7789_DRIVER
#define ILI9341_DRIVER       // <<< CORRECTO PARA CYD 2.8"

#define TFT_RGB_ORDER TFT_BGR

#define TFT_WIDTH  240
#define TFT_HEIGHT 320

#define TFT_INVERSION_OFF


// ##################################################################################
//
// Section 2. Define the pins that are used to interface with the display here
//
// ##################################################################################

// ###### EDIT THE PIN NUMBERS IN THE LINES FOLLOWING TO SUIT YOUR ESP8266 SETUP ######

// … (todo esto queda igual y no se toca)


// ######  FOR ESP8266 OVERLAP MODE EDIT THE PIN NUMBERS IN THE FOLLOWING LINES  ######

// … (nada cambia aquí)


// ###### EDIT THE PIN NUMBERS IN THE LINES FOLLOWING TO SUIT YOUR ESP32 SETUP   ######

// === BLOQUE VIEJO ELIMINADO ===
// === Y SUSTITUIDO POR ESTE BLOQUE CORRECTO SEGÚN TUS PINES ===

#define TFT_MISO 19   // MISO compartido
#define TFT_MOSI 23   // MOSI compartido
#define TFT_SCLK 18   // CLK compartido

// TFT DISPLAY
#define TFT_CS    17  // CS de la pantalla
#define TFT_DC    16  // D/C
#define TFT_RST    5  // RESET
#define TFT_BL    32  // Backlight

// TOUCH XPT2046
#define TOUCH_CS  21  // T_CS

// SD CARD
#define SD_CS     12  // CS de la SD

// TOUCH CALIBRATION
#define TOUCH_SWAP_XY
#define TOUCH_INVERT_Y
// #define TOUCH_INVERT_X   // Activar si X sale al revés

#define TOUCH_RAW_X_MIN  300
#define TOUCH_RAW_X_MAX  3800
#define TOUCH_RAW_Y_MIN  300
#define TOUCH_RAW_Y_MAX  3800

// === FIN DEL BLOQUE NUEVO ===


// ##################################################################################
//
// Section 3. Define the fonts that are to be used here
//
// ##################################################################################

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT


// ##################################################################################
//
// Section 4. Other options
//
// ##################################################################################

#define SPI_FREQUENCY  27000000
#define SPI_READ_FREQUENCY  20000000
#define SPI_TOUCH_FREQUENCY  2500000

#define USE_HSPI_PORT

// #define SUPPORT_TRANSACTIONS
