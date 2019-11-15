#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int main()
{
	string s, sw, sp="PLN";
	int a, li=0;

	cout << "podaj kwote i walute"<<endl;
	cin >> s;
	if(s[0]>='0'&&s[0]<='9') a = stod(s);
	for (int i = a; i > 0;)
	{
		i=i / 10;
		li++;
	}
	sw = s.substr(li, a);

	if (sw == "usd" || sw == "USD")a = a * 3.8691;
	else if (sw == "eur" || sw == "EUR")a = a * 4.2652;
	else if (sw == "gbp" || sw == "GBP")a = a * 4.9470;
	else if (sw == "chf" || sw == "CHF")a = a * 3.8787;
	else if (sw == "jpy" || sw == "JPY")a = (a * 3.5434)/100;
	else if (sw == "cad" || sw == "CAD")a = a * 3.8787;
	else
	{
		cout<<"niepoprawne dane"<<endl;
		system("pause");
		return 0;
	}


	cout << a << sp << endl;

	

	system("pause");
	return 0;
}
