/*
---------------------------------------------------------------

Emils E. Magone, em25106
Izveidot programmu gan C++, gan Python.
Ievadot loģiski nepareizus datus, programmai jāizdod atbilstošs paziņojums.

B4. Noskaidrot, vai dotajā naturālajā skaitlī ir atrodami vienādi cipari.
Ja ir, izdrukāt tos un skaitu, cik reižu dotais cipars ir sastopams.

Programmas gala versija izstrādāta: 24.10.2025
---------------------------------------------------------------

                Testa plāns

        Ievade:      Paredzamais rezultāts:

         1111         Cipars 1 atkartojas 4 reizes
         1234         Skaitlim visi cipari ir atskirigi
         1122         Cipars 2 atkartojas 2 reizes
                      Cipars 1 atkartojas 2 reizes
         aaaa         Nav naturals sk.(>0)
          -1          Nav naturals sk.(>0)

---------------------------------------------------------------
*/

#include <iostream>
using namespace std;

/*
void parbaude(int n) pieņem mainīgo skaitli no lietotāja, šo skaitli funkcijā sadala pa cipariem. 
No lietotaja skaitla uztaisa kopiju, kura parbauda vai sakrit kads cipars ar si skaitla kopiju.
Ja sakrit, tad tas tiek pasaka kurs cipars un cik reizes, ja ne, so ciparu saglaba atmina "gatavie"
Jo pec tam ja parbaudis ciparu kurs jau ir bijis iznaks duplicets pazinojums, cik sis aktartojamais cipars ir skaitli.
Bet ja sis neizpildas ar ne vienu ciparu, tad dod zinojumu ka visi cipari atskirigi.
*/

void parbaude(int n){
    int kopija = n;
    int kopija2;
    int cipars, skaits;
    int gatavie = 0; ///parbauditos cip. seit saglabas
    bool atkartojas = false; ///pienemam ka visi cip. atksirigi


    while (n>0){
        cipars=n%10; ///nemam vienu ciparu un laiz cauri sistemai
        n/=10;

        ///SIS BIJA KLUPSANAS AKMENS
        kopija2 = gatavie; ///gatavie mainigaja tiek saglabati visi cipari ka skaitli
        while (kopija2 > 0 && (kopija2 % 10 != cipars)){ ///mes parbaudam vai cipars ir jau bijis gatavie
            kopija2 /= 10;
        }
        if (kopija2 > 0) continue; ///atrada sakritibu, iet velreiz

        skaits = 0;
        kopija2 = kopija; ///kopija ir ka starpnieks starp n un kopija2

        while (kopija2>0){
            if (kopija2%10==cipars){
                skaits++;
            }
            kopija2/=10;
        }

        if (skaits > 1){ ///jo nevajag ka katram ciparam pasaka kad tas ir vienu reizi
            cout<<"Cipars "<< cipars << " atkartojas "<< skaits <<endl;
            atkartojas = true; ///savadak nekad netiks izdrukats nakosais if
            }
        gatavie = gatavie * 10 + cipars; ///saglaba ciparu atmina
    }

    if (atkartojas == false) cout<<"Skaitlim visi cipari ir atskirigi"<<endl;

}

int main(){

    int ok;

    do{
        int n;

        while (true) {
            cout << "Ievadiet naturalu skaitli (>0): ";
            cin >> n;
            if (cin.fail() || n <= 0) {
                cout << "Nav naturals sk.(>0)" << endl << endl;
                cin.clear();
                cin.ignore(1000, '\n'); ///notira lietotaja ievadi līdz 1000 simboliem vai līdz jaunas rindas simbolam '\n'
            } else break;
        }

        parbaude(n);

        cout<<"Velreiz? (1/0): ";
        cin>>ok;
        cout << "-----------------------------------------------------------" << endl;
        cout<<endl;
    } while (ok == 1);

    return 0;
}



