#include <stdio.h>
#include "header.h"



void schueler_hinzufügen(schueler_t schueler[max_schueler]) {


	for (int i = 0; i < max_schueler;i++) {
		if (schueler[i].id != i) {
			printf("Name:\n");
			scanf_s("%29s", schueler[i].name);
			printf("Nachname:\n");
			scanf_s("%29s", schueler[i].nachname);
			printf("Note:\t");
			scanf_s("%d", schueler[i].note);
			schueler[i].id = i;
		}
	}


	FILE* f=fopen("noten.csv", "a");

	fprintf(f,"")


	

}