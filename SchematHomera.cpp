#include <iostream>
using namespace std;

int homer(int wsp[], int st, int x) {
    if (st == 0) {
        return wsp[0];
    }
    return x * homer(wsp, st - 1, x) + wsp[st];
}

int main() {
    int stopien, argument;

    cout << "Podaj stopien wielomianu: ";
    cin >> stopien;

    int* wspolczynnik = new int[stopien + 1];

    for (int i = stopien; i >= 0; i--) {
        cout << "Podaj wspolczynnik stojacy przy potedze " << i << ": ";
        cin >> wspolczynnik[i];
    }

    cout << "Podaj argument: ";
    cin >> argument;

    int wynik = homer(wspolczynnik, stopien, argument);

    cout << "W( " << argument << " ) = " << wynik << endl;

    delete[] wspolczynnik;

    return 0;
}