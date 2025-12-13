#include "header.h"


void zeile_loeschen() {

	int id_auswahl;
	char confirm;

	printf("Welche ID möchten sie loeschen?\nID: ");
	scanf(" %d", &id_auswahl);
	printf("Eingabe bestaetigen: [j]a/[n]ein\n");
	scanf(" %c", &confirm);


	if (confirm == 'j') {
		schueler[id_auswahl - 1].id = 0;
		for (int i = id_auswahl; i < max_schueler; i++) {
			if (schueler[i].id != 0) {
				schueler[i].id = schueler[i].id - 1;
			}
			else {
				break;
			}
		}
	}
	else if (confirm == 'n') {
		printf("Vorgang abgebrochen.");
	}
	else {
		printf("Invalid Input");
	}

}



// ID WIRTD 0 gesetzt aber der platzz am array ist immer noch gleich