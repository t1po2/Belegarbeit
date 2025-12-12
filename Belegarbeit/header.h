#define _CRT_SECURE_NO_WARNINGS
#define max_schueler 5
#include <stdio.h>

typedef struct {
	int id;
	char name[30];
	char nachname[30];
	int note;
}schueler_t;

schueler_t schueler[max_schueler];






// Checks if File exists
void file_check();
//Menu and Options are asked
int menu_auswahl();
// Menuoption 1 asked number of new data and adds to the lsit
void add_schueler();
// prints existing data/listenings
void print_daten();
// id Loeschen
void zeile_loeschen();