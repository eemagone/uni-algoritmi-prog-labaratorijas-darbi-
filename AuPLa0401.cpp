#include <iostream>
using namespace std;

int main() {
    int ok;
    int sk;
    int ieprieksejais_sk;
    int max_virk_gar = 1;
    int virk_gar = 1;


    do {
        int n;

        // Ievade
        do {
            cout << "Cik skaitlus velaties ievadit? ";
            cin >> n;
            if (n < 1) {
                cout << "Ievadiet vairak par 0 skaitliem!" << endl;
            }
        } while (n < 1);




        cout << "Ievadiet " << n << " veselus skaitlus: ";
        cin >> ieprieksejais_sk;

        for (int i = 1; i < n; i++) {
            cin >> sk;

            if (sk > ieprieksejais_sk) {
                virk_gar++;
            } else {
                if (virk_gar > max_virk_gar) {
                    max_virk_gar = virk_gar;
                }
                virk_gar = 1;
            }

            ieprieksejais_sk = sk;
        }


        if (virk_gar > max_virk_gar) {
            max_virk_gar = virk_gar;
        }

        cout << "Garaka pieaugosa virkne satur " << max_virk_gar << " skaitlus." << endl;

        cout << "Velreiz? (1/0): ";
        cin >> ok;
        cout << endl;

    } while (ok == 1);

    return 0;
}
