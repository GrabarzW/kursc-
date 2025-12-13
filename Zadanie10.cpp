#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char slowo1[100];
    char slowo2[100];

    cout << "Podaj pierwsze slowo: ";
    cin >> slowo1;

    cout << "Podaj drugie slowo: ";
    cin >> slowo2;

    int wynik = strcmp(slowo1, slowo2);

    if (wynik == 0) {
        cout << "Napisy sa rowne";
    }
    else if (wynik > 0) {
        cout << "Pierwsze slowo jest wieksze leksykograficznie";
    }
    else {
        cout << "Drugie slowo jest wieksze leksykograficznie";
    }

    return 0;
}

