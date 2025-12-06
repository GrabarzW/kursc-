#include<iostream>
#include<string>

using namespace std;

int main(){
	int x;
	cout << "Podaj liczbe";
	cin >> x;
	int i = 4;
	while (i > 0) {
		int last = x % 10;
		cout << last;
		x /= 10;
		i--;
	}
return 0;
}
