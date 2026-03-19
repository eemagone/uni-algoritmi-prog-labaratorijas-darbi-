/*******************************************

Emīls E. Magone, em25106

G5. Uzrakstīt funkciju, kas pieliek sarakstam jaunu elementu saraksta sākumā, ja elements ar tādu vērtību neeksistē.

1) to realizējot kā vienvirziena saistīto sarakstu, izmantojot dinamiskas datu struktūras,
2) izmantojot STL::list konteineru.

Programma izveidota: 16/03/2026

Testa plāns:

Ievads     |     Programmas vēlamā reakcija
-----------|--------------------------------------------------
10         |    10
-----------|--------------------------------------------------
10         |     10
(atkartoti)|     Ir jau sk. saraksta
-----------|--------------------------------------------------
20         |     20 10
-----------|--------------------------------------------------


*******************************************/

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void pievienot(list<int> &saraksts, int vertiba) {

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

            pievienot(saraksts, n);

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
