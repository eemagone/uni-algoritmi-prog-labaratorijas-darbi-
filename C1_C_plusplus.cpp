/*
---------------------------------------------------------------
Emils E. Magone, em25106
Izveidot programmu valodā C++,
obligāti izmantojot norādītās vai kādas citas funkcijas.

C1. Virkni a(1..n) sauc par monotonu, ja a(1)<=a(2)<=...<=a(n) vai a(1)>=a(2)>=...>=a(n).
Dots veselu skaitļu masīvs A(m). Noskaidrot garāko tajā sastopamo monotono virkni.
Izveidot un izmantot funkciju, kas nosaka masīvā sastopamās monotonas virknes garumu,
sākot no elementa ar indeksu i

Programmas gala versija izstrādāta: 28.10.2025
---------------------------------------------------------------

                Testa plāns

Komentārs: Sākumā paprasam cik skaitļus ievadīs masīvā,
šis apjoms nevarēs būt 0< vai ne-vesels skaitlis

        Ievade:      Paredzamais rezultāts:

        1 2 3 4     Garaka virkne: 1 2 3 4
                    4 - garakas monotonas virknes garums

        1 1 2 2     Garaka virkne: 1 1 2 2
                    4 - garakas monotonas virknes garums

    -1 2 3 0 4 3 2 -2       Garaka virkne: 4 3 2 -2
                            4 - garakas monotonas virknes garums

---------------------------------------------------------------
*/

#include <iostream>
#include <vector>
using namespace std;

/*
int vesels():
Funkcija vesels() atgriež kā rezultātu veselu skaitli.
*/
int vesels() {
    double n;
    do {
        cout << "Ievadiet masiva garumu: ";
        cin >> n;
        if (cin.fail() || n <= 0 || n != (int)n) {
            cout << "Masivs nevar but <=0 vai aiz komata" << endl << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        } else break;
    } while (true);
    return n;
}


/*
int virknes_garums(int a[], int i):
Funkcija virknes_garums(a, i) atgriež garākās monotonās virknes garumu,
Kas sākās no indeksa i.
*/
int virknes_garums(const vector<int>& a, int i) {
    int augoss = 1, dilstoss = 1;

    for (int j = i; j < a.size() - 1; j++) { ///augoss
        if (a[j] <= a[j + 1]) augoss++;
        else break;
    }

    for (int j = i; j < a.size() - 1; j++) { ///dilstos
        if (a[j] >= a[j + 1]) dilstoss++;
        else break;
    }

    return max(augoss, dilstoss);
}


/*
int parbaude(a[]):
Funkcija parbaude(a) izdrukā garāko virkni a.
Un garākās virknes garumu.
*/
int parbaude(const vector<int>& a) {
    int max_v = 1;
    int sakums = 0, beigas = 0;

    for (int i = 0; i < a.size(); i++) {
        int garums = virknes_garums(a, i);

        if (garums > max_v) {
            max_v = garums;
            sakums = i;
            beigas = i + garums - 1;
        }
    }

    cout << "Garaka virkne: ";
    for (int i = sakums; i <= beigas; i++)
        cout << a[i] << " ";
    cout << endl;

    return max_v;
}

int main() {
    int ok;

    do {
        int atgriez = vesels();
        vector<int> a(atgriez);

        cout << "Ievadi " << atgriez << " skaitlus masiva: ";
        for (int i = 0; i < atgriez; i++) {
            cin >> a[i];
        }

        cout << endl << endl;
        cout << parbaude(a) << " - garakas monotonas virknes garums" << endl << endl;

        cout << "Velreiz? (1/0): ";
        cin >> ok;
        cout << endl;

    } while (ok == 1);

    return 0;
}
