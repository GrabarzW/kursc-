#include <iostream>
using namespace std;

int main() {
    //Zadanie1
    string imie; int wiek;
    cout << "Podaj imie" << endl;
    cin >> imie;
    cout << "Podaj wiek" << endl;
    cin >> wiek;
    cout << "Czesc " << imie << " Za rok bedziesz mial " << wiek + 1 << " lat" << endl;
    //Zadanie2
    int liczba1;
    cout << "Podaj liczbe" << endl;
    cin >> liczba1;
    if (liczba1 > 0) {
        cout << "Liczba dodatnia" << endl;
    }
    else if (liczba1 < 0) {
        cout << "Liczba ujemna" << endl;
    }
    else {
        cout << "Liczba to zero" << endl;
    }
    //Zadanie3
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) {
            cout << i << " ";
        }
        else {
            i++;
        }
    }
    //Zadanie4
    int liczba2 = 1; int suma = 0;
    while (liczba2 != 0) {
        cout << "Podaj liczbe" << endl;
        cin >> liczba2;
        suma += liczba2;
    }
    if (liczba2 == 0) {
        cout << suma;
    }
    //Zadanie5
    int dzien;
    cout << "Podaj numer dnia" << endl;
    cin >> dzien;
    switch (dzien)
    {
    case 1:
        cout << "Poniedzialek" << endl;
        break;
    case 2:
        cout << "Wtorek" << endl;
        break;
    case 3:
        cout << "Sroda" << endl;
        break;
    case 4:
        cout << "Czwartek" << endl;
        break;
    case 5:
        cout << "Piatek" << endl;
        break;
    case 6:
        cout << "Sobota" << endl;
        break;
    case 7:
        cout << "Niedziela" << endl;
        break;
    default:
        cout << "Bledny numer dnia" << endl;
        break;
    }

    int oceny[10]; int sumaocen = 0; int niedostateczne = 0; int celujace = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Podaj ocene od 1-6" << endl;
        cin >> oceny[i];
        sumaocen += oceny[i];
    }
    for (int i = 0; i < 10; i++) {
        if (oceny[i] == 1) {
            niedostateczne += 1;
        }
        else if (oceny[i] >= 5) {
            celujace += 1;
        }
    }
    cout << "Srednia to: " << sumaocen / 10 << endl;
    cout << "niedst: " << niedostateczne << " Cel/bdb: " << celujace << endl;
    //Zadanie6
    int tab1[5]; int sumatab1 = 0;
    cout << "Podaj 5 liczb do tablicy" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> tab1[i];
        sumatab1 += tab1[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << tab1[i] << " ";
    }
    cout << "Suma wszystkich liczb: " << sumatab1 << endl;
    cout << "Srednia arytmetyczna liczb: " << sumatab1 / 5 << endl;
    //Zadanie7
    int tab2[10]; int tab2dod = 0; int tab2uje = 0; int tab2zero = 0;
    cout << "Podaj 10 liczb do tablicy" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> tab2[i];
    }
    for (int i = 0; i < 10; i++) {
        if (tab2[i] > 0) {
            tab2dod += 1;
        }
        else if (tab2[i] < 0) {
            tab2uje += 1;
        }
        else if (tab2[i] == 0) {
            tab2zero += 1;
        }
    }
    cout << "Dodatnie: " << tab2dod << endl << "Ujemne: " << tab2uje << endl << "Zera: " << tab2zero << endl;
    //Zadanie8
    int tab3[8];
    cout << "Podaj 8 liczb do tablicy" << endl;
    for (int i = 0; i < 8; i++) {
        cin >> tab3[i];
    }
    int min = tab3[0];
    int max = tab3[0];

    for (int i = 0; i < 8; i++) {
        if (tab3[i] < min) min = tab3[i];
        if (tab3[i] > max) max = tab3[i];
    }

    cout << "Najwyzsza liczba: " << max << endl;
    cout << "Najnizsza liczba: " << min << endl;
    //Zadanie9
    int opcja = -1; int zad9licz1; int zad9licz2;
    while (opcja != 0) {
        cout << "\n--- MENU ---\n";
        cout << "1. Dodawanie\n";
        cout << "2. Odejmowanie\n";
        cout << "3. Mnozenie\n";
        cout << "4. Dzielenie\n";
        cout << "0. Zakoncz program\n";
        cout << "Wybierz opcje: ";
        cin >> opcja;
        switch (opcja)
        {
        case 1:
            cout << "Podaj liczbe pierwsza" << endl;
            cin >> zad9licz1;
            cout << "Podaj liczbe pierwsza" << endl;
            cin >> zad9licz2;
            cout << "Wynik: " << zad9licz1 + zad9licz2 << endl;
            break;
        case 2:
            cout << "Podaj liczbe pierwsza" << endl;
            cin >> zad9licz1;
            cout << "Podaj liczbe pierwsza" << endl;
            cin >> zad9licz2;
            cout << "Wynik: " << zad9licz1 - zad9licz2 << endl;
            break;
        case 3:
            cout << "Podaj liczbe pierwsza" << endl;
            cin >> zad9licz1;
            cout << "Podaj liczbe pierwsza" << endl;
            cin >> zad9licz2;
            cout << "Wynik: " << zad9licz1 * zad9licz2 << endl;
            break;
        case 4:
            cout << "Podaj liczbe pierwsza" << endl;
            cin >> zad9licz1;
            cout << "Podaj liczbe pierwsza" << endl;
            cin >> zad9licz2;
            cout << "Wynik: " << zad9licz1 / zad9licz2 << endl;
            break;
        case 0:
            break;
        default:
            cout << "Podano nieprawilowa opcje!" << endl;
            break;
        }
    }
    return 0;
}
