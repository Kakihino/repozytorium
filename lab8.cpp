#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;


int fsuma(vector<vector<int>>&tab)
{
	int i, j, s = 0;
	for (i=0; i < tab.size(); i++)
		for (j=0; j < tab[i].size(); j++)
		{
			s += tab[i][j];
		}
	return s;
}

struct punkt
{
	int x, y;
};


int main()
{
	vector<vector<int>>tab = { {-12, 34, 53}, {42, -3, -12}, {29, -57, 13} };
	cout << "Suma tab: " << fsuma(tab) << endl;
	punkt punkty[100], p1;
	p1.x = 2;
	p1.y = 4;
	cout << "punkt 1:"<<p1.x<<p1.y<<endl;

	system("pause");
	return 0;
}