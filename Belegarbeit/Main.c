#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"

int main() {

	//checks if file exist, if not it will be created
	file_check();


	// Auswahl Menu Optionen
	//1 hinzufügen
	//2 bearbeiten
	//3 löschen
	//4 Beenden


	int menu_zahl = menu_auswahl();
	if (menu_zahl == 1) {
		add_schueler();
	}


		


	return 0;

}