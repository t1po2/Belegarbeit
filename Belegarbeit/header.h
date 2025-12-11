#define max_schueler 50

typedef struct {
	int id;
	char name[30];
	char nachname[30];
	int note;
}schueler_t;

schueler_t schueler[max_schueler];






int menu_auswahl();
void file_check();