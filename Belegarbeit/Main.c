
#define _CRT_SECURE_NO_WARNINGS
#define max_schueler 50
#include <stdio.h>




typedef struct {
	int id;
	char name[30];
	char nachname[30];
	int note;
}schueler_t;




void datei_r(FILE* datei) {

	schueler_t personen[max_schueler];


	char erste_zeile[200];
	datei = fopen(datei, "r");
	fgets(erste_zeile, sizeof(erste_zeile), datei);


	while (fscanf(datei, "%f, %29s %29s,%f ") == 4) {
		printf(" %f, %29s %29s,%f");
	}


}



int main() {

	FILE* f = fopen("noten.csv", "r");

	if (f == NULL) {
		f = fopen("noten.csv", "w");
		if (f != NULL) {
			fprintf(f, "ID, Name, Vorname, Noten");
			fclose(f);
		}
	}
	fclose(f);

	
	
	
	f = fopen("noten.csv", "r");


	return 0; 

}