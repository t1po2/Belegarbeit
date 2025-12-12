#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"



void add_schueler() {
	int new_adds;
	int x = 0;
	printf("Wie viele moechten sie hinzufuegen?\n");

	scanf("%d", &new_adds);


	//neue Daten ins Array
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

	
	print_daten();
}



	
