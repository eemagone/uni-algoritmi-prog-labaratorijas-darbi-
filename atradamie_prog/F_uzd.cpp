/*******************************************

Emīls E. Magone, em25106

F5. Dots teksta fails. Uzrakstīt programmu, kura atrod un izvada citā teksta failā visas tās rindiņas,
Kas satur patvaļīgi uzdotu apakšvirkni n (drīkst pieņemt, ka apakšvirknes garums nepārsniedz 40 simbolus).
Kopā ar sastapto rindiņu izvadīt arī rindas numuru, kurā atrasta apakšvirkne.

Dati no faila jānolasa pa vienai rindiņai.

Programma izveidota: 17/02/2026

Testa plāns:

Ievads     |     Programmas vēlamā reakcija
-----------|--------------------------------------------------
Daudzi     |     3. Daudzi sak, ka programmesana ir gruta.
-----------|--------------------------------------------------
ir         |     1. Programmesana ir interesanta.
           |     2. C++ ir jaudiga valoda.
           |     3. Daudzi sak, ka programmesana ir gruta.
           |     5. Pasaule ir liela.
-----------|--------------------------------------------------
liela.     |     5. Pasaule ir liela.
-----------|--------------------------------------------------
(atstarpe) |     1. Programmesana ir interesanta.
           |     2. C++ ir jaudiga valoda.
           |     3. Daudzi sak, ka programmesana ir gruta.
           |     4. Vienpadsmitais decembris.
           |     5. Pasaule ir liela.
           |     6. Gatavs testesanai!
--------------------------------------------------------------

*******************************************/


#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    int ok;

        do {

            string ievade;
            string rinda;
            int rindasNr = 0;

            fstream fin;
            fstream fout;

            cout<<"Ievadiet meklejamo apaksvirkni: ";
            getline(cin, ievade);

            fin.open ("no.txt", ios::in);
            if (!fin){cout<<"nav faila"<<endl; return 13;} //parbaudam vai fails vispar atveras

            fout.open ("uz.txt", ios::out);
            if (!fout){cout<<"nav faila"<<endl; return 13;}

            getline(fin, rinda); //nolasam pirmo rindu

            while (fin){
                rindasNr++; //Sakam skaitit rindas (ar pirmo ieskaitot)

                if (rinda.find(ievade) != string::npos){ //parbaude - mekleta apaksvirkne ir rinda?
                    //ja ir tad rindas nr. un visa rinda
                    fout<<rindasNr<<". "<<rinda<<endl;
                }
                getline(fin, rinda); //nakosa rinda
            }


            fin.close();
            fout.close();

        cout<<"Turpinat? (1/0): ";
        cin>>ok;
        cin.ignore(); //notira buferi

        } while (ok == 1);


    return 0;

}
