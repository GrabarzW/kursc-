#include<iostream>
#include<string>

using namespace std;

int main()
{
	int pierwsza_liczba;
	cout << "\nPodaj pierwsza liczbe";
	cin >> pierwsza_liczba;
	if (pierwsza_liczba > 0) {
		cout << "\nLiczba jest dodatnia";
	}
	else if (pierwsza_liczba < 0) {
		cout << "\nLiczba jest ujemna";
	}
	else {
		cout << "\n Liczba to 0";
	}
	if (pierwsza_liczba % 2 == 0 && pierwsza_liczba>0) {
		cout << "\nLiczba jest parzysta";
	}
	else if (pierwsza_liczba % 2 == 1 && pierwsza_liczba > 0) {
		cout << "\nLiczba jest nieparzysta";
	}
	else {
		cout << "\nLiczba jest ujemna badz jest zerem";
	}
	if (pierwsza_liczba >= 10 && pierwsza_liczba <= 50) {
		cout << "\nMiesci sie w przedziale";
	}
	else {
		cout << "\nNie znajduje sie w przedziale";
	}
	int liczba_nr1, liczba_nr2, liczba_nr3;
	cout << "\nPodaj pierwsza liczbe";
	cin >> liczba_nr1;
	cout << "\nPodaj druga liczbe";
	cin >> liczba_nr2;
	cout << "\nPodaj trzecia liczbe";
	cin >> liczba_nr3;
	if (liczba_nr1 < liczba_nr2 && liczba_nr2 < liczba_nr3) {
		cout << liczba_nr1 << liczba_nr2 << liczba_nr3;
	}
	else if (liczba_nr1 < liczba_nr3 && liczba_nr3 < liczba_nr2) {
		cout << liczba_nr1 << liczba_nr3 << liczba_nr2;
	}
	else if (liczba_nr2 < liczba_nr1 && liczba_nr1 < liczba_nr3) {
		cout << liczba_nr2 << liczba_nr1 << liczba_nr3;
	}
	else if (liczba_nr2 < liczba_nr3 && liczba_nr3 < liczba_nr1) {
		cout << liczba_nr2 << liczba_nr3 << liczba_nr1;
	}
	else if (liczba_nr3 < liczba_nr1 && liczba_nr1 < liczba_nr2) {
		cout << liczba_nr3 << liczba_nr1 << liczba_nr2;
	}
	else if (liczba_nr3 < liczba_nr2 && liczba_nr2 < liczba_nr1) {
		cout << liczba_nr3 << liczba_nr2 << liczba_nr1;
	}
	return 0;
}
