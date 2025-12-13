#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char wyraz[50];
    char odwrocone[50];
    char powiekszony[50];
    char pomniejszony[50];
    cout << "Podaj wyraz"<<endl;
    cin >> wyraz;

    cout <<"Dlugosc wyrazu to: " << strlen(wyraz) << endl;
    
    int dl = strlen(wyraz);

    for (int i = 0; i < dl; i++) {
        odwrocone[i] = wyraz[dl - 1 - i];
    }

    odwrocone[dl] = '\0';
    cout << "Odwrotnosc: " << odwrocone << endl;
    bool takieSame = true;
    for (int i = 0; i < dl; i++) {
        if (wyraz[i] != odwrocone[i]) {
            takieSame = false;
            break;
        }
    }
    if (takieSame) {
        cout << "Slowo jest palindromem" << endl;
    }
    else {
        cout << "Slowa sa rozne" << endl;
    }
    int litery = 0, liczby = 0, inne = 0;
    for(int i = 0; i<dl; i++){
        if (isalpha(wyraz[i])) {
            litery++;
        }
        else if (isdigit(wyraz[i])) {
            liczby++;
        }
        else {
            inne++;
        }
    }
    cout << "Litery: " << litery <<endl;
    cout << "Liczby: " << liczby << endl;
    cout << "Znaki inne: " << inne << endl;
    for (int i = 0; i < dl; i++) {
        powiekszony[i] = toupper(wyraz[i]);
    }
    powiekszony[dl] = '\0';

    for (int i = 0; i < dl; i++) {
        pomniejszony[i] = tolower(wyraz[i]);
    }
    pomniejszony[dl] = '\0';

    cout << "Pomniejszony: " << pomniejszony << endl;
    cout << "Powiekszony: " << powiekszony << endl;

    return 0;
}

