#include<iostream>
using namespace std;

int main() {
	char worte[129];
	int laenge;
	cout << "Geben Sie eine Worte eine: (Max. 128):" << endl;
	cin >> worte;
	laenge = strlen(worte);
	
	for (int i = laenge-1; i >= 0; i--)
	{
		cout << "" << worte[i];
	}
	cout << "\n";
	system("pause");
	return 0;
}

int main2() {
	for (int i = 1; i < 10; i++)
	{
		if (i == 3)
		{
			cout << "zahlen 3 werd gestartret" << endl;
			continue;
		}
		cout << i << endl;
	}
	system("pause");
	return 0;
}

int main1() {

	int zaehler;
	do
	{
		cout << "Bitt Zahle ein geben (0=Ende)" << endl;
		cin >> zaehler;
	} while (zaehler !=0); //当zaehler不等于0时循环do语句。
	return 0;
}
