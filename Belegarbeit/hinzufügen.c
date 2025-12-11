#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"



void add_schueler() {
	int new_adds;
	int x = 0;
	printf("Wie viele moechten sie hinzufuegen?\n");

	scanf("%d", &new_adds);


	//Todesblock
	for (int j = 0; j < max_schueler; j++) {
		if (schueler[j].id == 0) {
			printf("Name:\n");
			scanf("%29s", schueler[j].name);
			printf("Nachname:\n");
			scanf("%29s", schueler[j].nachname);
			printf("Note:\t");
			scanf("%d", &schueler[j].note);
			schueler[j].id = j+1;
			x = x+1;
			if (x == new_adds) {
				break;
			}
		}
	}

	FILE* f = fopen("noten.csv", "w");

	for (int i = 0; i < max_schueler; i++) {
		if (schueler[i].id != 0) {
			fprintf(f, "%d, %s, %s, %d\n", schueler[i].id, schueler[i].name, schueler[i].nachname, schueler[i].note);
		}
	}
	fclose(f);
}



	
