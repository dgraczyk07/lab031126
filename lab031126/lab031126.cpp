#include <iostream>
#include <cstdlib>
using namespace std;

 //zad. 1.

int main() {
	/*int n;
	int tab[10];

	for (int i = 0; i < 10; i++) {
		cout << "Podaj liczbe: ";
		cin >> n;
		tab[i] = n;
	}

	for (int i = 0; i<10; i++) {
		cout << "Liczby w odwrotnej kolejnosci: ";
		tab[0] = n;
	}

	*/

	/*zad.2.
	int n;
	int i;
	cout << "Ile liczb wyznaczyc?" << endl;
	cin >> n;
	int* tab = new int[n];
	for (int i = 0; i < n; i++) {
		if (i == 0)
			tab[i] = 0;
		else if (i == 1)
			tab[i] = 1;
		else
			tab[i] = tab[i - 1] + tab[i - 2];
	}
	for (i = 0; i < n; i++) {
		cout << tab[i] << " ";
	}
	*/

	//zad. 3.
	int n;

	for (n = 0; n <= 10; n++) {
		int n = rand();
		cout << n << endl;
	 }
	int srednia;
	srednia = n / 10;
	cout << "Srednia wynosi: " << srednia << endl;


}

 

