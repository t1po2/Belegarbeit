#define _CRT_SECURE_NO_WARNINGS
#define max_schueler 50
#include <stdio.h>
#include "header.h"

int main() {



	schueler_t schueler[max_schueler];


	//checks if file exist, if not it will be created

	FILE* f = fopen("noten.csv", "r");

	if (f == NULL) {
		printf("Keine Datei vorhanden.\nDie Datei noten.csv wird erstellt.");
		f = fopen("noten.csv", "w");
		if (f != NULL) {
			fprintf(f, "ID, Name, Vorname, Noten");
			fclose(f);
		}
	}

	fclose(f);



	f = fopen("noten.csv", "r");

	char erste_zeile[200];
	fgets(erste_zeile, sizeof(erste_zeile), f);


		for (int i = 0; i < max_schueler; i++) {
			if (fscanf(f, "%d, %[^,], %[^,], %d", &schueler[i].id, schueler[i].name, schueler[i].nachname, &schueler[i].note) == 4) {
				printf("%d, %s %s, %d\n", schueler[i].id, schueler[i].name, schueler[i].nachname, schueler[i].note);
			}
		}
	fclose(f);

	menu_auswahl;

	printf("Auswahl: %d",menu_auswahl());


	

	































	return 0; 

}//testttt