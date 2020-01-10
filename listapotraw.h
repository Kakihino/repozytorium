#ifndef LISTAPOTRAW_H
#define LISTAPOTRAW_H

#include <string>
using namespace std;
struct Potrawa {
	string nazwa;
	float cena;
	Potrawa *next;
};

typedef Potrawa* wsk_Potrawa;

void fDodajNaPoczatek(wsk_Potrawa &wsk_glowa, string nazwa, float cena);
void fDodajNaKoniec(wsk_Potrawa &wsk_glowa, string nazwa, float cena);
void fDodajPoPotrawie(wsk_Potrawa &wsk_p, string nazwa, float cena);
void fWypiszListe(wsk_Potrawa wsk_glowa);
void fUsunListe(wsk_Potrawa &wsk_glowa);
wsk_Potrawa fWyszukaj(wsk_Potrawa wsk_glowa, string nazwa);
int fUsunPotrawe(wsk_Potrawa &wsk_glowa, string nazwa);
wsk_Potrawa fListaZPliku(string sciezka);
int fListaZapisDoPliku(string sciezka, wsk_Potrawa wsk_glowa);

#endif