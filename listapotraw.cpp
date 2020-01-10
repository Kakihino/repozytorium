#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "listapotraw.h"
using namespace std;

void fDodajNaPoczatek(wsk_Potrawa &wsk_glowa, string nazwa, float cena)
{
	wsk_Potrawa wsk_nowa = new Potrawa;
	wsk_nowa->nazwa = nazwa;
	wsk_nowa->cena = cena;
	wsk_nowa->next = wsk_glowa;
	wsk_glowa = wsk_nowa;
}

void fDodajNaKoniec(wsk_Potrawa &wsk_glowa, string nazwa, float cena)
{
	wsk_Potrawa wsk_nowa = new Potrawa;
	wsk_nowa->nazwa = nazwa;
	wsk_nowa->cena = cena;
	wsk_nowa->next = nullptr;
	wsk_Potrawa wsk_ostatnia = wsk_glowa;
	while (wsk_ostatnia->next != nullptr)wsk_ostatnia = wsk_ostatnia->next;
	wsk_ostatnia->next = wsk_nowa;
}

void fDodajPoPotrawie(wsk_Potrawa &wsk_p, string nazwa, float cena)
{
	//...
}

void fWypiszListe(wsk_Potrawa wsk_glowa)
{
	wsk_Potrawa wsk_p;
	cout << fixed << setprecision(2) << endl;
	for (wsk_p = wsk_glowa; wsk_p != nullptr; wsk_p = wsk_p->next) {
		cout << wsk_p->nazwa << ", " << wsk_p->cena << endl;
	}
}

void fUsunListe(wsk_Potrawa &wsk_glowa)
{
	for (wsk_Potrawa wsk_p; wsk_glowa != nullptr; ) {
		wsk_p = wsk_glowa->next;
		delete wsk_glowa;
		wsk_glowa = wsk_p;
	}
}

wsk_Potrawa fWyszukaj(wsk_Potrawa wsk_glowa, string nazwa)
{
	return nullptr;
}

int fUsunPotrawe(wsk_Potrawa &wsk_glowa, string nazwa)
{
	return 0;
}

wsk_Potrawa fListaZPliku(string sciezka)
{
	wsk_Potrawa wsk_glowa = nullptr;
	ifstream f1(sciezka);
	if (!f1) cout << "Blad otwarcia pliku do odczytu!" << endl;
	else {
		//...
		f1.close();
	}
	return wsk_glowa;
}

int fListaZapisDoPliku(string sciezka, wsk_Potrawa wsk_glowa)
{
	if (wsk_glowa == nullptr) return 0;
	ofstream fout(sciezka);
	if (!fout) {
		cout << "Blad otwarcia pliku do zapisu!" << endl;
		return 0;
	}
	else {
		//...
		fout.close();
		return 1;
	}
}