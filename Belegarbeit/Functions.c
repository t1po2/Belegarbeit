#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int menu_auswahl() {

	//1 hinzufügen
	//2 bearbeiten
	//3 löschen
	//4 Beenden

	int auswahl;
	printf("\n\n");
	printf("\n-----Optionen-----\n");
	printf("1: Hinzufügen\n2: Bearbeiten\n3:loeschen\n4: Beenden");
	printf("\nBitte Option auswaehlen\n");

	scanf_s("%d", &auswahl);

	return auswahl;
}
