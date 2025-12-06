#include<iostream>
#include<string>

using namespace std;
long long silnia(int n)
{
	if (n < 2) 
		return 1;
	return n * silnia(n - 1);
}
int sumOfDigits(int x) {
	int sum = 0;
	while (x > 0){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}
int main()
{
	int n;
	cout << "Podaj liczbe";
	cin >> n;
	cout << "n! =" << silnia(n) << endl;
	int x;
	cout << "Podaj liczbe";
	cin >> x;
	cout << "suma liczby x =" << sumOfDigits(x) << endl;
	int y;
	cout << "Podaj liczbe";
	cin >> y;
	if (y % 2 == 0 || y % 3 == 0 || y % 5 == 0 || y % 7 == 0) {
		cout << "liczba nie jest pierwsza\n";
	}
	else {
		cout << "Liczba jest pierwsza\n";
	}
	int t;
	cout << "Podaj liczbe";
	cin >> t;
	cout << "1 razy t :" << t*1 << endl;
	cout << "2 razy t :" << t * 2 << endl;
	cout << "3 razy t :" << t * 3 << endl;
	cout << "4 razy t :" << t * 4 << endl;
	cout << "5 razy t :" << t * 5 << endl;
	cout << "6 razy t :" << t * 6 << endl;
	cout << "7 razy t :" << t * 7 << endl;
	cout << "8 razy t :" << t * 8 << endl;
	cout << "9 razy t :" << t * 9 << endl;
	cout << "10 razy t :" << t * 10 << endl;
}
