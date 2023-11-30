
//--------------------------- ESP SETUP -------------------------------------

#define WIFI_REPEAT          500
#define WIFI_MAXTRIES        20

#define SERIAL_SPEED          19200
#define HOST_NAME            "Karajan"

#define SCL        D1   // D1 GPIO05 for I2C (Wire) System Clock
#define SDA        D2   // D2 GPIO04 for I2C (Wire) System Data
#define LDR        A0
#define BUTTON     D2   // GPIO04
#define STDLED     D4   // GPIO02 (& Console2 TX)
// ***LEDs used on the Witty board***
#define REDLED     D8   // GPIO15
#define GRNLED     D6   // GPIO12
#define BLULED     D7   // GPIO13 
