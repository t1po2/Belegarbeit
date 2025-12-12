#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"

int main(){

	


	//checks if file exist, if not it will be created
	file_check();


	// Auswahl Menu Optionen
	//1 hinzufügen
	//2 bearbeiten
	//3 aktuelle Liste anzeigen
	//4 löschen
	//5 Beenden

	while (1) {
		int menu_zahl = menu_auswahl();
		if (menu_zahl == 1) {
			add_schueler();
		}
		else if (menu_zahl == 3) {
			print_daten();
		}
		else if (menu_zahl == 4) {
			zeile_loeschen();
		}
		else if (menu_zahl == 5) {
			break; 
		}
	}
	










		
	FILE* f = fopen("noten.csv", "w");

	for (int i = 0; i < max_schueler; i++) {
		if (schueler[i].id != 0) {
			fprintf(f, "%d, %s, %s, %d\n", schueler[i].id, schueler[i].name, schueler[i].nachname, schueler[i].note);
		}
	}


	fclose(f);
	return 0;

}