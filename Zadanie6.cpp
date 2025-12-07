#include<iostream>
#include<string>
using namespace std;
void powitanie();
void wypiszSume(int a, int b);
void kwadrat(int x);

void powitanie() {
	cout << "Witaj w swiecie C++\n";
	}
void wypiszSume(int a, int b) {
	int suma = a + b;
		cout << "Suma to " << suma << endl;
	}
void kwadrat(int x) {
	int kwadrat = x * x;
	cout << kwadrat;
}
int silnia(int n) {
	if (n == 0)
		return 1;
	else
		return n * silnia(n - 1);
}
int main(){
	void powitanie();
	wypiszSume(3, 5);
	int x;
	cout << "Podaj liczbe";
	cin >> x;
	kwadrat(x);
	int n;
	cout << "Podaj liczbe";
	cin >> n;
	cout << "n! = " << silnia(n) << endl;
	return 0;
}
