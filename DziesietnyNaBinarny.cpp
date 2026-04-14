#include <iostream>
using namespace std;

void Binarne(int liczba) {
    int tab[31];
    int i = 0;   

    while (liczba != 0) {
        tab[i++] = liczba % 2; // K4
        liczba = liczba / 2;   // K5
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << tab[j];
    }
}

int main() {
    int liczba;
    cout << "Podaj liczbe dziesietna: ";
    cin >> liczba;

    cout << "Liczba " << liczba << " po zamianie na postac binarna: ";
    Binarne(liczba);

    return 0;
}