#include <iostream>
using namespace std;

int main() {

int ok;

    do {

    int* mas;       ///masīvs skaitļiem
    int* lielv;     ///lielāko elementu indeksu masīvs
    int liel;       ///lielākais elements
    int lielskaits = 0; ///lielāko elementu skaits
    int n;

        cout << "Ievadiet skaitļu skaitu: ";
        cin >> n;


        ///Dinamiskā atmiņa masīvam
        mas = new int[n];

        ///ievade
        cout << "Ievadi " << n << " veselus skaitļus:" << endl;
        for (int i = 0; i < n; i++) {
            cout << "mas[" << i << "] = ";
            cin >> mas[i];
        }

        ///Atrod lielāko elementu liel
        liel = mas[0];
        for (int i = 1; i < n; i++) {
            if (mas[i] > liel) {
                liel = mas[i];
            }
        }

        lielv = new int[n]; /// ja visi skaitli vienadi

        ///Meklē lielākā elementa indeksus
        for (int i = 0; i < n; i++) {
            if (mas[i] == liel) {
                lielv[lielskaits] = i;
                lielskaits++;
            }
        }

        /// Izvade
        cout << "Lielākā vērtība masīvā: " << liel << endl;
        cout << "Indeksā: ";
        for (int i = 0; i < lielskaits; i++) {
            cout << lielv[i] + 1<<',';

        }
        cout << endl;

        delete[]mas;
        delete[]lielv;


        cout << "\nTurpināt? (1/0): ";
        cin >> ok;

    } while (ok == 1);

    return 0;
}
