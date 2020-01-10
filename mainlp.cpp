#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <conio.h>
#include "listapotraw.h"
using namespace std;

void fmenu()
{
	cout << "a. Wypisz Menu\n";
	cout << "b. Wczytaj liste z pliku menu.txt\n";
	cout << "c. Zapisz liste do pliku menu.txt\n";
	cout << "d. Wyszukaj potrawe\n";
	cout << "e. Dopisz pozycje na poczatku Menu\n";
	cout << "f. Dopisz pozycje na koncu Menu\n";
	cout << "g. Dopisz pozycje po wybranej potrawie\n";
	cout << "h. Usun potrawe\n";
	cout << "z. Koniec\n";
}

int main() {
	wsk_Potrawa glowa = nullptr;
	fDodajNaPoczatek(glowa, "pomidorowa", 8.0);
	fDodajNaPoczatek(glowa, "schabowy", 12.0);
	fDodajNaPoczatek(glowa, "spaghetti", 14.0);
	fDodajNaKoniec(glowa, "rosol", 7.0);
	fWypiszListe(glowa);
	//fmenu();
	//char c;
	//while ((c = _getch()) != 'z') {
	//	switch (c) {
	//	case 'a':
	//		break;
	//	case 'b':
	//		break;
	//	case 'c':
	//		break;
	//	case 'd':
	//		break;
	//	case 'e':
	//		break;
	//	case 'f':
	//		break;
	//	case 'g':
	//		break;
	//	default:
	//		break;
	//	}
	//}
	fUsunListe(glowa);
	system("pause");
	return 0;
}