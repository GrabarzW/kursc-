#include<iostream>
#include<string>
using namespace std;
void roznica(int a, int b) {
	int roznica = a - b;
	cout << roznica << endl;
}
void iloczyn(int a, int b) {
	int iloczyn = a - b;
	cout << iloczyn << endl;
}
void srednia(int a, int b) {
	int srednia = (a+b)/2;
	cout << srednia << endl;
}
void parzysta(int a) {
	if (a % 2 == 0) {
		cout << "Parzysta"<<endl;
	}
	else {
		cout << "Nieparzysta"<<endl;
	}
}
void bezwzgledna(int a) {
	int bezwzgledna = abs(a);
	cout << bezwzgledna<<endl;
}
void pole_prostokata(int a, int b) {
	int pole_prostokata = a * b;
	cout << pole_prostokata << endl;
}
void pole_kola(int a) {
	int pole_kola = 3.14 * (a * a);
	cout << pole_kola << endl;
}
void obwod_kwadratu(int a) {
	int obwod_kwadratu = a * 4;
	cout << obwod_kwadratu << endl;
}
void minimum(int a, int b) {
	if (a < b) {
		cout << a << endl;
	}
	else {
		cout << b << endl;
	}
}
void maksimum(int a, int b) {
	if (a > b) {
		cout << a << endl;
	}
	else {
		cout << b << endl;
	}
}
int main() {
	roznica(5, 3);
	iloczyn(5, 2);
	srednia(5, 5);
	parzysta(3);
	bezwzgledna(-5);
	pole_prostokata(3, 5);
	pole_kola(5);
	obwod_kwadratu(3);
	minimum(7, 1);
	maksimum(3, 9);
	return 0;
}
