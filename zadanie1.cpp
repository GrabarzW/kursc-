#include<iostream>
#include<string>

using namespace std;

int main()
{
	int pierwsza_liczba, druga_liczba, trzecia_liczba;
	cout << "\nPodaj pierwsza liczbe";
	cin >> pierwsza_liczba;
	cout << "\nPodaj druga liczbe";
	cin >> druga_liczba;
	cout << "\nPodaj trzecia liczbe";
	cin >> trzecia_liczba;
	cout << "\nSredia" << (pierwsza_liczba + druga_liczba+trzecia_liczba)/3;
	int promien;
	cout << "\nPodaj pierwsza liczbe";
	cin >> promien;
	cout << "\nPole kola" << 3.14 * (promien * promien);
	int stopnie;
	cout << "\nPodaj stopnie celcjusza";
	cin >> stopnie;
	cout << "\nFahrenhait:"<< stopnie * 1.8 + 32;
	int cena_paliwo;
	cout << "\nPodaj cene paliwa";
	cin >> cena_paliwo;
	cout << "\nKoszt Paliwa" << 0.09 * 335 * cena_paliwo;
	int dlugosc_trasy, spalanie_auta;
	cout << "\nPodaj dlugosc trasy";
	cin >> dlugosc_trasy;
	cout << "\nPodaj spalanie (L/100km)";
	cin >> spalanie_auta;
	cout << "\nKoszt paliwa na tej trasie:" << (spalanie_auta / 100) * dlugosc_trasy * cena_paliwo;


	return 0;
}
