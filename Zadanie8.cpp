#include <iostream>
using namespace std;

int main() {
    int tab[10];
    int n = 10;

    cout << "Podaj 10 liczb:\n";
    for (int i = 0; i < 10; i++) {
        cin >> tab[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; ) {
            if (tab[i] == tab[j]) {
                for (int k = j; k < n - 1; k++) {
                    tab[k] = tab[k + 1];
                }
                n--;
            }
            else {
                j++;
            }
        }
    }

    cout << "Tablica bez powtorzen:\n";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    int tab2[10];
    int odw[10];

    cout << "Podaj 10 liczb:\n";
    for (int i = 0; i < 10; i++) {
        cin >> tab2[i];
        odw[i] = tab2[i];
    }

    for (int i = 0; i < 5; i++) {
        int temp = odw[i];
        odw[i] = odw[9 - i];
        odw[9 - i] = temp;
    }

    bool takieSame = true;
    for (int i = 0; i < 10; i++) {
        if (tab2[i] != odw[i]) {
            takieSame = false;
            break;
        }
    }

    if (takieSame) {
        cout << "Tablica jest taka sama jak odwrocona.";
    }
    else {
        cout << "Tablica rozni sie od odwróconej.";
    }

    return 0;
}
