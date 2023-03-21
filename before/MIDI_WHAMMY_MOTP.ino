#define DLYLED 30
#define DLY_MAP_1 119 // 125 BPM
#define DLY_MAP_2 920 // Presision
#define DLY_UNSUSTAINABLE 1000000/(135/60) // 135 BPM
#define DLY_FIN 100000000
#define MIN 0
#define MAX 127
#define START 2
#define UP 3
#define DOWN 4
int valled = 0;
int val1 = 0;
int old_val1 = 0;
int state1 = 0;
int val2 = 0;
int old_val2 = 0;
int state2 = 0;
int val3 = 0;
int old_val3 = 0;
int state3 = 0;
int i = 0;
int pgrm = 1;
int program = 0;
int function = 0;

int led01 = 35;
int led02 = 37;
int led03 = 39;
int led04 = 41;
int led05 = 43;
int led06 = 45;
int led07 = 47;
int led08 = 49;
int led09 = 51;
int led10 = 53;

int ledA = 34;
int ledB = 36;
int ledC = 38;
int ledD = 40;
int ledE = 42;
int ledF = 44;
int ledG = 46;
int ledH = 48;
int ledI = 50;
int ledJ = 52;

void setTreadleValue(uint8_t n) {
Serial.write((uint8_t)0xB0); //TYPE: control change
Serial.write((uint8_t)0x0B); //CONTROLLER NUMBER 11: expression pedal
Serial.write((uint8_t)n);
}
 
void setProgram(uint8_t p) {
Serial.write((uint8_t)0xC0);
Serial.write((uint8_t)p);
}

void setup ();

void loop();
