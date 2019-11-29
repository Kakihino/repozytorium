#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//Konwersj� wielko�ci litery przechowywanej w zmiennej typu char mo�na przeprowadzi� nast�puj�co, np.:
//	char c = 'u';
//	c = c + ('A'-'a'); //konwersja z malej litery na du��
//	c = c + ('a'-'A'); //konwersja z du�ej litery na ma��
//W poni�szym programie zdefiniowano tablic� zawieraj�c� list� nazwisk, z nieuporz�dkowan� wielko�ci� liter.
//Uzupe�ni� program nast�puj�co:
// - Przekszta�ci� tablic� tak, aby wszystkie nazwiska mia�y wielk� pierwsz� liter�, a wszystkie kolejne
//	 litery by�y ma�e (np. Chrzanowski).
// - Wypisa� wszystkie tak przekszta�cone nazwiska na ekranie.
// - Zmieni� program tak, aby w/w funkcjonalno�ci by�y realizowane za pomoc� dw�ch funkcji:
//   funkcji konwertuj�cej nazwiska i funkcji wypisuj�cej nazwiska


/*
const int N = 7;
void konwersja(string tab[])
{
	int l;
	for (int i = 0; i < N; i++)
	{
		l = tab[i].length();
		if (tab[i][0] >= 'a' && tab[i][0] <= 'z')tab[i][0] = tab[i][0] + ('A' - 'a');
		for (int j = 1; j < l; j++)
		{
			if (tab[i][j] >= 'A' && tab[i][j] <= 'Z')tab[i][j] = tab[i][j] + ('a' - 'A');
		}
	}
}
void wypisanie(string tab[])
{
	for (int i = 0; i < N; i++)
	{
		cout<<tab[i]<<endl;
	}
}


int main()
{
	string nazwiska[N] = { "Kowalski","wisNIEwski","chrzANOWSKI","lewandowski","kACZYNSKi","BUZEK","tusk" };
	int n, i;
	konwersja(nazwiska);
	wypisanie(nazwiska);
	*/




//Napisa� nast�puj�ce funkcje:
// - funkcja, kt�ra przepisuje tablic� do drugiej tablicy
// - funkcja, kt�ra zwraca warto�� sumy element�w tablicy
// - funkcja, kt�ra wyznacza warto�� maksymaln� element�w tablicy
// - funkcja, kt�ra sortuje tablic�
// - funkcja, kt�ra wypisuje zawarto�� tablicy
//Z wykorzystaniem utworzonych funkcji, napisa� program, kt�ry
// kopiuje tab1 do tab2,
// nast�pnie wyznacza sum� element�w tab1,
// nast�pnie sortuje tab2,
// nast�pnie sortuje tab3,
// nast�pnie wypisuje tab1, tab2 i tab3.


const int P = 6;
const int R = 8;
void fun1(int tab1[P], int tab2[P])
{
	for (int i = 0; i < P; i++)
		tab2[i] = tab1[i];
}

int fun2(int tab[P])
{
	int suma = 0;
	for (int i = 0; i < P; i++)
		suma += tab[i];
	return suma;
}

int fun3(int tab[P])
{
	int max=tab[0];
	for (int i = 1; i < P; i++)
		if (max < tab[i])max = tab[i];
	return max;
}

void fun4(int tab[P])
{
	int p = 0;
	
	for (int i = 0; i < P - 1; i++)
	{
		int l = 0;
		if (tab[i] > tab[i + 1])
		{
			p = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = p;
			l++;
		}
		if (l = 0)exit;
	}
}

void fun5()
{

}

int main()
{

	int tab1[P] = { 3, -66, -10, 0, 15, 7 };
	int tab2[P];
	int tab3[R] = { 7, 46, -10, 10, 33, 17, -44, 1 };

	fun1(tab1, tab2);
	fun4(tab2);

	cout << "suma: " << fun2(tab1) << endl;
	cout << "maksimum: " << fun3(tab1) << endl;

	system("pause");
	return 0;
}