/*
---------------------------------------------------------------

Emils E. Magone, em25106
Izveidot programmu gan C++, gan Python.
Ievadot loģiski nepareizus datus, programmai jāizdod atbilstošs paziņojums.

A2. Doti naturāli skaitļi m un n.
Noskaidrot starpību starp m un n dažādo reizinātāju skaitu

Programmas gala versija izstrādāta: 01.10.2025
---------------------------------------------------------------

                Testa plāns

        Ievade:      Paredzamais rezultāts:

        3   1           2 - 1 = 1
        9   6           3 - 4 = -1
        a   45          Ievadiet naturāli skaitli! (>0)
        34  -2          Ievadiet naturāli skaitli! (>0)

---------------------------------------------------------------
*/


#include <iostream>
using namespace std;

int dalisana(int p) { ///var rakstit jebkuru definetu mainigo, vajag vnk salidzinajumu
    int dalitaju_sk = 0;
    for (int visi_sk = 1; visi_sk <= p; visi_sk++) {
        if (p % visi_sk == 0) { ///ja dalas bez atlikumiem skaitam tik klat dalitaju skaitam
            dalitaju_sk++;
        }
    }
    return dalitaju_sk;///no sis klases mums vajag lai atdod so
}

int main() {
    int ok, p, o, r;

    do {
        ///pirmais ievaditais cipars

        while (true) {
            cout << "Ievadiet pirmo naturalo skaitli (>0): ";
            cin >> p;
            if (cin.fail() || p <= 0) { ///parbauda vai nav negativi skaitli, simboli vai skaitli aiz komata
                cout << "Ievadi pirmo skaitli ka naturalu skaitli!!!" << endl;
                cin.clear(); ///lai notiritu kludu un lautu velreiz lietot cin
                cin.ignore(1000, '\n'); ///notira lietotaja ievadi līdz 1000 simboliem vai līdz jaunas rindas simbolam '\n'
            } else {
                break;
            }
        }

        ///otrais ievaditais cipars
        while (true) {
            cout << "Ievadiet otro naturalo skaitli (>0): ";
            cin >> o;
            if (cin.fail() || o <= 0) {
                cout << "Ievadi otro skaitli ka naturalu skaitli!!!" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            } else {
                break;
            }
        }


        r = dalisana(p) - dalisana(o); ///rezultāts
        cout << "Abu naturalo skaitlu dalitaju skaita starpiba: " << r << endl;
        cout << "-----------------------------------------------------------" << endl;


        cout << "Turpinat? (1/0): ";
        cin >> ok;
        cout << "-----------------------------------------------------------" << endl;

    } while (ok == 1);

    return 0;
}
