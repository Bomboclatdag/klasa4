
#include <iostream>
using namespace std;

void czynnik(int liczba){
    int k;
    k = 2;
    while( liczba > 1){
        
        
        if(liczba % k ==0){
            cout << k << " ";
            liczba = liczba /k;
        }
        else k+=1;
    }
    
    
    
}
int main()
{
    
    int liczba;
    cout<<"wybierz liczbe: ";
    cin >> liczba;
    cout<<"czynniki pierwsze to: ";
    czynnik(liczba);
    return 0;
}