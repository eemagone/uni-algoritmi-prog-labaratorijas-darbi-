#include <iostream>
using namespace std;

/*
int getNatural():
Atgriež kā rezultātu naturālu skaitli n.
*/

int getNatural() {
    int n;

    do {
        cout << "Ievadiet naturalu skaitli (>0): ";
            cin >> n;
            if (cin.fail() || n <= 0) {
                cout << "Nav naturals sk.(>0)" << endl << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            } else break;

    } while (true);

    return n;
}

int main() {
    int ok;

    do {
        int atgriez = getNatural();
        cout << "Jūs ievadījāt: " << atgriez << endl;

        cout << "Vēlreiz? (1/0): ";
        cin >> ok;

    } while (ok == 1);
    return 0;
}


