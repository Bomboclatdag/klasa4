#include <iostream>
#include <cmath>
using namespace std;

bool pierwsza(int n) {
    if (n < 2) {         
        return false;
    }
    for (int d = 2; d <= sqrt(n); d++) {  
        if (n % d == 0) {   
            return false;   
        }
    }
    return true;          
}

int main() {
    int n;
    cout << "podaj liczbe ";
    cin >> n;  
    

    if (pierwsza(n)) {
        cout << n << " pierwsza";
    } else {
        cout << n << " nie pierwsza";
    }

    return 0;
}