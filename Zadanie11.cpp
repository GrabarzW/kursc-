#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int mies;
    cout << "Podaj numer miesiaca\n";
    cin >> mies;
    switch (mies)
    {
    case 1:
        cout << "Styczen\n";
        break;
    case 2:
        cout << "Luty\n";
        break;
    case 3:
        cout << "Marzec\n";
        break;
    case 4:
        cout << "Kwiecien\n";
        break;
    case 5:
        cout << "Maj\n";
        break;
    case 6:
        cout << "Czerwiec\n";
        break;
    case 7:
        cout << "Lipiec\n";
        break;
    case 8:
        cout << "Sierpien\n";
        break;
    case 9:
        cout << "Wrzesien\n";
        break;
    case 10:
        cout << "Pazdziernik\n";
        break;
    case 11:
        cout << "Listopad\n";
        break;
    case 12:
        cout << "Grudzien\n";
        break;
    default:
        cout << "Zla liczba\n";
        break;
    }

    double a, b;
    char operacja;

    cout << "Podaj pierwsza liczbe:\n ";
    cin >> a;
    cout << "Podaj druga liczbe: \n";
    cin >> b;
    cout << "Wybierz operacje (+, -, *, /):\n ";
    cin >> operacja;

    switch (operacja) {
    case '+': cout << "Wynik: " << a + b << endl; break;
    case '-': cout << "Wynik: " << a - b << endl; break;
    case '*': cout << "Wynik: " << a * b << endl; break;
    case '/':
        if (b != 0) cout << "Wynik: " << a / b;
        else cout << "Blad: dzielenie przez zero!\n";
        break;
    default: cout << "Niepoprawna operacja\n";
    }

    int ocena;
    cout << "Podaj ocene (1-6):\n ";
    cin >> ocena;

    switch (ocena) {
    case 1: cout << "Brak promocji do nastepnej klasy\n"; break;
    case 2: cout << "Brak promocji do nastepnej klasy\n"; break;
    case 3: cout << "Promocja do nastepnej klasy\n"; break;
    case 4: cout << "Promocja do nastepnej klasy\n"; break;
    case 5: cout << "Promocja do nastepnej klasy\n"; break;
    case 6: cout << "Promocja z ocena celujaca\n"; break;
    default: cout << "Niepoprawna ocena\n";
    }

    int punkty;
    cout << "Podaj liczbe punktow (0-18):\n ";
    cin >> punkty;

    if (punkty < 0 || punkty > 18) {
        cout << "Niepoprawna liczba punktow\n";
    }
    else {
        switch (punkty / 3) {
        case 0:
        case 1: cout << "Ocena: 2\n"; break;
        case 2: cout << "Ocena: 3\n"; break;
        case 3:
        case 4: cout << "Ocena: 4\n"; break;
        case 5:
        case 6: cout << "Ocena: 5\n"; break;
        }
    }

    double zl;
    int wybor;
    cout << "Podaj kwote w zl:\n ";
    cin >> zl;

    cout << "Wybierz walute: 1 - funty, 2 - dolary, 3 - euro: \n";
    cin >> wybor;

    switch (wybor) {
    case 1: cout << "Kwota w funtach: " << zl * 0.21 << endl; break;
    case 2: cout << "Kwota w dolarach: " << zl * 0.27 << endl; break;
    case 3: cout << "Kwota w euro: " << zl * 0.25 << endl; break;
    default: cout << "Niepoprawny wybor waluty\n";
    }

    int godz;
    cout << "Podaj godzine (0-23):\n ";
    cin >> godz;

    if (godz < 0 || godz > 23) {
        cout << "Niepoprawna godzina\n";
    }
    else {
        switch (godz) {
        case 8: case 9: case 10: case 11:
            cout << "Wykłady od 8 do 11\n";
        case 12: case 13:
            cout << "Dyskusje od 12 do 13\n";
        case 14:
            cout << "Obiad o 14\n";
        case 15: case 16: case 17: case 18:
            cout << "Prelekcje od 15 do 18\n";
        case 19:
            cout << "Kolacja o 19\n"; break;
        default:
            if (godz < 8) cout << "Jeszcze nie rozpoczęto seminarium\n";
            else if (godz > 19) cout << "Seminarium zakonczone\n";
        }
    }

    return 0;
}

