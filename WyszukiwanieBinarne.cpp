#include <iostream>
using namespace std;
int main() {
    int tab[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
    
    int szukana;
    int l = 0;
    int p = 15;
    int sr = (l+p) /2;
    int pozycja = 100;
    
    cout << "Podaj liczbe ktora chcesz znalezc: ";
    cin >> szukana;
    
    while (l <= p) {
        sr = (l + p) / 2;
        if (tab[sr] == szukana) {
            pozycja = sr;
            break;
        }
        if (tab[sr] > szukana){		
            p = sr - 1;
   		}
        else{
        	l = sr + 1;
		}          
    }
    
    if (pozycja == 100){
    	cout << "Liczba " << szukana << " nie istnieje";
	}    	   
    else{
    	cout << "Liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie: " << pozycja + 1;
	}
        
    return 0;
}