#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;



int main()
{
	int l = 0;
	const int N = 100;
	double temp[N] = {};
	ifstream f1;
	double suma=0;
	f1.open("temperatury.txt", ios::in);
	if (f1)
	{
		string linia;
		for (;;)
		{
			getline(f1, linia);
			if (f1.eof()) break;
			suma = suma + stod(linia);
			cout << linia << endl;
			l++;
		}
		f1.close();
	}
	else cout << "plik nie zostal prawidlowo otwarty" << endl;
	suma = suma / l;
	cout << endl << "srednia temperatur wynosi: " << suma << endl;
	


	system("pause");
}