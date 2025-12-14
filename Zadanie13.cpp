#include <iostream>
using namespace std;

int main() {
    int oceny[10];
    int liczbaOcen = 0;
    int wybor = 0;

    while (wybor != 5) {
        cout << "\n--- MENU ---\n";
        cout << "1. Wprowadz oceny\n";
        cout << "2. Wyswietl oceny\n";
        cout << "3. Oblicz srednia\n";
        cout << "4. Najwyzsza i najnizsza ocena\n";
        cout << "5. Zakoncz program\n";
        cout << "Wybierz opcje: ";
        cin >> wybor;

        switch (wybor) {

        case 1: {
            cout << "Podaj liczbe ocen (1-10): ";
            cin >> liczbaOcen;

            if (liczbaOcen < 1 || liczbaOcen > 10) {
                cout << "Nieprawidlowa liczba ocen!\n";
                liczbaOcen = 0;
            }
            else {
                for (int i = 0; i < liczbaOcen; i++) {
                    cout << "Podaj ocene " << i + 1 << " (2-5): ";
                    cin >> oceny[i];

                    if (oceny[i] < 2 || oceny[i] > 5) {
                        cout << "Nieprawidlowa ocena! Wpisz ponownie.\n";
                        i--;
                    }
                }
            }
            break;
        }

        case 2:
            if (liczbaOcen == 0) {
                cout << "Brak zapisanych ocen.\n";
            }
            else {
                cout << "Oceny:\n";
                for (int i = 0; i < liczbaOcen; i++) {
                    cout << oceny[i] << " ";
                }
                cout << endl;
            }
            break;

        case 3:
            if (liczbaOcen == 0) {
                cout << "Brak ocen do obliczenia sredniej.\n";
            }
            else {
                int suma = 0;
                for (int i = 0; i < liczbaOcen; i++) {
                    suma += oceny[i];
                }
                double srednia = (double)suma / liczbaOcen;
                cout << "Srednia ocen: " << srednia << endl;
            }
            break;

        case 4:
            if (liczbaOcen == 0) {
                cout << "Brak ocen.\n";
            }
            else {
                int min = oceny[0];
                int max = oceny[0];

                for (int i = 1; i < liczbaOcen; i++) {
                    if (oceny[i] < min) min = oceny[i];
                    if (oceny[i] > max) max = oceny[i];
                }

                cout << "Najwyzsza ocena: " << max << endl;
                cout << "Najnizsza ocena: " << min << endl;
            }
            break;

        case 5:
            cout << "Koniec programu.\n";
            break;

        default:
            cout << "Nieprawidlowa opcja!\n";
        }
    }

    return 0;
}
