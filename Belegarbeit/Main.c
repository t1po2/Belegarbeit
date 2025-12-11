#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "header.h"

int main() {

	//checks if file exist, if not it will be created
	file_check();


	int menu_zahl = menu_auswahl();
	if (menu_zahl == 1) {
		add_schueler();
	}


		


	return 0;

}