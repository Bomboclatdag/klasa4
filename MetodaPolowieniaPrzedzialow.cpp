#include <iostream>
using namespace std;

// funkcja f(x)
double f(double x) {
    return x * (x * (x - 3) + 2) - 6;
}

// metoda bisekcji
double bisekcja(double a, double b, double epsilon) {
    double srodek;

    while (b - a > epsilon) {
        srodek = (a + b) / 2;

        if (f(srodek) == 0)
            return srodek;

        if (f(a) * f(srodek) < 0)
            b = srodek;
        else
            a = srodek;
    }

    return (a + b) / 2;
}

int main() {
    double a = -10;
    double b = 10;
    double epsilon = 0.00001;

    double wynik = bisekcja(a, b, epsilon);

    cout << "Znalezione miejsce zerowe wynosi: " << wynik << endl;

    return 0;
}