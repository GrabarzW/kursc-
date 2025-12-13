#include <iostream>
using namespace std;

int main() {
    int macierz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << macierz[i][j] << " ";
        }
        cout << endl;
    }
    int macierz2[4][4];

    int suma = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> macierz2[i][j];
            suma += macierz2[i][j];
        }
    }
    cout << "Suma = " << suma << endl;
    int macierz3[3][3];

    cout << "Podaj 9 liczb do macierzy 3x3:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> macierz3[i][j];
        }
    }

    int min = macierz3[0][0];
    int max = macierz3[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (macierz3[i][j] < min)
                min = macierz3[i][j];
            if (macierz3[i][j] > max)
                max = macierz3[i][j];
        }
    }

    cout << "Najmniejsza wartosc: " << min << endl;
    cout << "Najwieksza wartosc: " << max << endl;

    
    return 0;
}
