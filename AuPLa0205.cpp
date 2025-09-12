/*******************************************
Emils E. Magone, em25106
AuPLa0205. Izveidot C++ programmu,
kura ļauj ievadīt trīs naturālus skaitļus un noskaidro,
vai starp skaitļiem ir kāds “laimīgais skaitlis”.
“Laimīgais skaitlis” ir tāds skaitlis,
kura pēdējie divi cipari ir 21.
Noskaidrošanu veikt tikai ar skaitliskām darbībām.

Programma izveidota: 12.09.2025.
*******************************************/

/************Test plans*************

    ievade      paredzamais rezultats
    1 2 21      ir laimigais skaitlis
    1 2 3       nav laimigais skaitlis
    1 0 2       jaievada skaitli >0

*******************************************/


#include <iostream>
using namespace std;

int main() {
    int ok;

    do {
        int sk1, sk2, sk3;
        bool ir = false;

//--------------------------------------------------------------------------------

        do {
            cout << "Ievadi 1. naturalo skaitli (0>): " << endl;
            cin >> sk1;
            if (sk1 <= 0) {
                cout << "Ievadi 1. skaitli >0!" << endl;
            }
        } while (sk1 <= 0);

        do {
            cout << "Ievadi 2. naturalo skaitli (0>): " << endl;
            cin >> sk2;
            if (sk2 <= 0) {
                cout << "Ievadi 2. skaitli >0!" << endl;
            }
        } while (sk2 <= 0);

        do {
            cout << "Ievadi 3. naturalo skaitli (0>): " << endl;
            cin >> sk3;
            if (sk3 <= 0) {
                cout << "Ievadi 3. skaitli >0!" << endl;
            }
        } while (sk3 <= 0);

//--------------------------------------------------------------------------------

        if (sk1 % 100 == 21) {
            ir = true;
        }
        if (sk2 % 100 == 21) {
            ir = true;
        }
        if (sk3 % 100 == 21) {
            ir = true;
        }

//--------------------------------------------------------------------------------

        if (ir == true) {
            cout << "Ir kads laimigais skaitlis" << endl;
        } else {
            cout << "Nav laimiga cipara" << endl;
        }

        cout << "Velreiz? (1/0)" << endl;
        cin >> ok;

    } while (ok == 1);

    return 0;
}
