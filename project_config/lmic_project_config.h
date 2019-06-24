// project-specific definitions
//#define CFG_eu868 1
//#define CFG_us915 1
//#define CFG_au921 1
//#define CFG_as923 1
#define CFG_as923jp 1
#define LMIC_COUNTRY_CODE LMIC_COUNTRY_CODE_JP	/* for as923-JP */
//#define CFG_in866 1
#define CFG_sx1276_radio 1
//#define LMIC_USE_INTERRUPTS

//disable all code related to ping
#define DISABLE_PING
//disable all code related to beacon tracking.
// Requires ping to be disabled too
#define DISABLE_BEACONS

//LG01を利用する場合は以下を定義すること。
#define DISABLE_INVERT_IQ_ON_RX
#define MINRX_SYMS 250
#define FOR_LG01_GW

//LG02を利用する場合は以下を定義すること。
//#define FOR_LG02_GW
//#define MINRX_SYMS 250

//LG308を利用する場合は以下を定義すること。
//#define MINRX_SYMS 250

//AS923で、DR10以外で通信する場合に以下をdefineしてください。
//また、Join時のDR値を変更するため、lmic_bandplan_as923.hの
//LMICbandplan_getInitialDrJoin()も変更してください。
//#define OTHER_DR_AS923

//MATCHX MX1702を利用する場合は以下を定義すること。
//#define MINRX_SYMS 250

// DEBUG
//#define LMIC_DEBUG_LEVEL 2
//#define LMIC_PRINTF_TO Serial
