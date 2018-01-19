// project-specific definitions for otaa sensor

//Choose the Frequency Plan for LoRaWAN
//#define CFG_eu868 1
//#define CFG_eu868 1
//#define CFG_us915 1
//#define CFG_cn783 1   // not yet
//#define CFG_eu433 1   // not yet
//#define CFG_au921 1
//#define CFG_cn490 1   // not yet
#define CFG_as923 1
//#define CFG_kr921 1   // not yet
//#define CFG_in866 1


#define CFG_sx1276_radio 1
//#define LMIC_USE_INTERRUPTS



//disable all code related to ping
#define DISABLE_PING
//disable all code related to beacon tracking.
// Requires ping to be disabled too
#define DISABLE_BEACONS


//Uncomment this to use the node with LG01
#define FOR_LG01_GW

//
#define SF_INITIAL_REQUEST_JOIN AS923_DR_SF10
