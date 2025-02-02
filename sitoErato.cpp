#include <iostream>
using namespace std;

void sitoEratostenesa(int n) {
    
    int* tablica = new int[n + 1];

    for (int i = 0; i <= n; i++) {
        tablica[i] = 1;
    }

    // 0 i 1 nie są liczbami pierwszymi
    tablica[0] = 0;
    tablica[1] = 0;

    // Algorytm Sita Eratostenesa
    for (int i = 2; i * i <= n; i++) {
        if (tablica[i] == 1) { // Jeśli `i` jest liczbą pierwszą
            for (int j = i * i; j <= n; j += i) {
                tablica[j] = 0; // Oznaczamy wielokrotności `i` jako niepierwsze
            }
        }
    }
    
    for(int i = 2; i<=n; i++){
        if(tablica[i] == 1){
            cout<<i<<endl;
        }
    }

    /*if (n >= 1000) {
        int pierwsze[3] = {0, 0, 0}; // Tablica na 3 ostatnie liczby pierwsze
        int znalezione = 0;          // Licznik znalezionych liczb pierwszych

        // Szukamy od końca trzy ostatnie liczby pierwsze
        for (int i = n; i >= 2 && znalezione < 3; i--) {
            if (tablica[i] == 1) {
                pierwsze[znalezione] = i;
                znalezione++;
            }
        }

        // Wypisujemy liczby w kolejności rosnącej
        cout << "Trzy ostatnie liczby pierwsze: ";
        for (int i = 2; i >= 0; i--) {
            cout << pierwsze[i] << " ";
        }
        cout << endl;
    } 
    else {
        cout << "Liczby pierwsze: ";
        for (int i = 2; i <= n; i++) {
            if (tablica[i] == 1) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    // Zwolnienie pamięci
    delete[] tablica;*/
}

int main() {
    int n;
    cout << "Podaj koncowa wartosc: ";
    cin >> n;

    sitoEratostenesa(n);

    return 0;
}
