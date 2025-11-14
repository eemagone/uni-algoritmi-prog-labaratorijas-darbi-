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
Atgriež, kā rezultātu veselu ciparu n.
*/
int vesels() {
    double n; //lai lautu parbaudit, ja skaitlis aiz komata ir

    do {
        cout << "Ievadiet masiva garumu: ";
            cin >> n;
            if (cin.fail() || n <= 0 || n!=(int)n) {
                cout << "Masivs nevar but <=0 vai aiz komata" << endl << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            } else break;

    } while (true);

    return n;
}

/*
int parbaude(int atgriez, int a[]):
Atgriež, kā rezultātu garāko monotono virkni masīvā a[]
Un garākās virknes garumu.
*/
int parbaude(vector <int> a){

    int augoss = 1, dilstoss = 1, max_v = 1; //garakajai monotonai virknei jabut vismaz 2 skaitli
    int beigas = 0, sakums = 0;

        for (int i = 0; i < a.size() - 1; i++){
            if (a[i]<=a[i+1]) augoss++; //atrod garako augoso virkni
                else augoss = 1;

            if (a[i]>=a[i+1]) dilstoss++;//atrod garako dilstoso virkni
                else dilstoss = 1;

            if (augoss > max_v){
                max_v = augoss;
                beigas = i + 1; //garakas virknes beigas
            }
            if (dilstoss > max_v){
                max_v = dilstoss;
                beigas = i + 1;
            }
        };
    sakums = beigas - max_v + 1; //+1 jo indekss sakas no 0

    cout << "Garaka virkne: ";
    for (int i = sakums; i <= beigas; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return max_v;
}

int main() {
    int ok;

    do {
        int atgriez = vesels();
        vector <int> a(atgriez);

        cout<<"Ievadi "<< atgriez<<" skaitlus masiva: ";
        for (int i = 0; i < atgriez; i++) {
            cin >> a[i];
        }

        cout<<endl<<endl;
        cout << parbaude(a)<< " - garakas monotonas virknes garums"<<endl<<endl;

        cout << "Velreiz? (1/0): ";
        cin >> ok;
        cout << endl;

    } while (ok == 1);
    return 0;
}

///SAGLABA PIRMO GARAKO VIRKNI JA IR 2 VIENADA GARUMA VIRKNES
// jasaglaba tas funkcijas kas itere cauri ka atseviskas un formulejumu salabot
/*
int vesels():
Funkcija vesels() atgriež kā rezultātu veselu skaitli.
*/
/*
int parbaude(int a[]):
Funkcija parbaude(a) izdrukā garāko vektoru a.
Un garākās virknes garumu.
*/
