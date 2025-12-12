#include "header.h"





void print_daten() {
	printf("--------\n");
	printf("Aktuelle Liste:\n");
	printf("--------\n");
	printf("ID | Name Nachname | Note\n");
	for (int i = 0; i < max_schueler; i++) {
		if (schueler[i].id != 0) {
			printf("%d, %s %s, %d\n", schueler[i].id, schueler[i].name, schueler[i].nachname, schueler[i].note);
		}
	}
}
