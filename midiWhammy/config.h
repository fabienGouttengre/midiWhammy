// config.h

#ifndef _CONFIG_H
#define _CONFIG_H

#define MAXPROGRAME 21 // Nombre de programmes disponibles sur la pedal commence à 1

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

#define LED_PROGRAMME_1 35
#define LED_PROGRAMME_2 37
#define LED_PROGRAMME_3 39
#define LED_PROGRAMME_4 41
#define LED_PROGRAMME_5 43
#define LED_PROGRAMME_6 45
#define LED_PROGRAMME_7 47
#define LED_PROGRAMME_8 49
#define LED_PROGRAMME_9 51
#define LED_PROGRAMME_10 53

#define LED_MODE_1 34
#define LED_MODE_2 36
#define LED_MODE_3 38
#define LED_MODE_4 40
#define LED_MODE_5 42
#define LED_MODE_6 44
#define LED_MODE_7 46
#define LED_MODE_8 48
#define LED_MODE_9 50
#define LED_MODE_10 52

const int ledProgram[10] = { 35,37,39,41,43,45,47,49,51,53 }; // Configuration des leds pour sélectionner les programmes.
const int ledMode[10] = { 34,36,38,40,42,44,46,48,50,52 }; // Configuration des leds pour sectionner les configurations.


#endif // _CONFIG
