/*******************************************

Emīls E. Magone, em25106

G5. Uzrakstīt funkciju, kas pieliek sarakstam jaunu elementu saraksta sākumā, ja elements ar tādu vērtību neeksistē.

1) to realizējot kā vienvirziena saistīto sarakstu, izmantojot dinamiskas datu struktūras,
2) izmantojot STL::list konteineru.

GG uzdevums

x) vismaz viena no datu pārbaudēm jārealizē,
Izmantojot izņēmumsituāciju apstrādes
(exception handling) mehānismu - throw, try, catch

Programma izveidota: 15/05/2026
*******************************************/

#include <iostream>
#include <list>
#include <algorithm>
#include <stdexcept>
using namespace std;


/*** void pievienot(list &saraksts, int vertiba);
Funkcija pievienot(saraksts, vertiba) -
Pievieno argumentā saraksts jaunu elementu saraksta sākumā,
ja elements ar tādu vērtību tajā vēl neeksistē. ***/

void pievienot(list<int> &saraksts, int vertiba) {

    if (vertiba < 0) {
        throw invalid_argument("Saraksta nedrikst pievienot negativus skaitlus!");
    }

    auto it = find(saraksts.begin(), saraksts.end(), vertiba);

    if (it == saraksts.end()) {
        saraksts.push_front(vertiba);
    } else {
        cout << "Ir jau sk. saraksta" << endl;
    }
}

int main() {

    int ok;

    do {
        list<int> saraksts;
        int n;
        char izvele;

        do {
            cout << "Ievadiet skaitli: ";
            cin >> n;

            try { ///try-catch
                pievienot(saraksts, n);
            } catch (const invalid_argument& e) {
                cout << "Kluda: " << e.what() << endl;
            }

            cout << "Saraksts: ";
            for (int x : saraksts) cout << x << " ";
            cout << endl;

            cout << "Vel sk.? (y/n): ";
            cin >> izvele;

        } while (izvele == 'y');

        cout << "Atkartot programmu? (1/0): ";
        cin >> ok;

    } while (ok == 1);

    return 0;
}
