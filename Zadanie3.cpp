#include<iostream>
#include<string>

using namespace std;

int main()
{
	for (int i = 0; i <= 10; i++) {
		cout << i;
	}
	cout << endl;
	int i2 = 1;
	while (i2 <= 20){
		if (i2 % 2 == 0) {
			cout << i2;
			i2++;
		}
		else {
			i2++;
		}
	}
	cout << endl;
	for (int i3 = 100; i3 >= 0; i3--) {
		cout << i3;
	}
	cout << endl;
	int suma = 0;
	for (int i4 = 1; i4 <= 100; i4++) {
		suma += i4;
	}
	cout << suma << endl;
	for (int i5 = 1; i5 <= 10; i5++) {
		cout << i5 * i5;
	}
	int liczba;
	do {
		cout << "Podaj liczbe";
		cin >> liczba;
		if (liczba == 0) {
			break;
		}
	} while (liczba != 0);
	return 0;
}
