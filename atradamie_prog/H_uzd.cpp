/*******************************************

Emīls E. Magone, em25106

H5. Dots teksta fails. Atrast tekstā 5 viesbiežāk sastopamos blakus esošo vārdu pārus
(blakus esošie ir vienā rindā esoši vārdi, kurus atdala tikai ne-burtu simboli).
Izdrukāt vārdu pārus pēc to sastapšanas reižu skaita dilstošā secībā,
pievienojot arī sastapšanas biežumu (piemēram, of the 12, and the 10, at the 10, on the 10, he would 8).

Informācijas glabāšanai pirms izdrukas failā izmantot vārdnīcu (STL) map un/vai STL list.
Par vārdu tiek uzskatīta latīņu alfabēta burtu virkne.

Programma izveidota: 20/04/2026

_______________________________________________________________________
Ievade                               | Programmas velama reakcija
_____________________________________|_________________________________
suns, skrien, atri.                  |
suns skrien atri                     | Top 5:
kakis, iet - leni                    |   1. skrien atri : 2
                                     |   2. suns skrien : 2
                                     |   3. iet leni : 1
                                     |   4. kakis iet : 1
_____________________________________|_________________________________
                                     |
The the, the THE!                    | Top 5:
THE the... the the.                  |   1. the the : 6
Zila jura, zila debess.              |   2. liels vejs : 4
Zila jura un zila debess.            |   3. zila debess : 2
Liels vejs pus, liels vejs dzen      |   4. zila jura : 2
makonus. Liels vejs, liels vejs!     |   5. dzen makonus : 1
_____________________________________|_________________________________

*******************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <map> //vardnicas izveidei
#include <list> // --||--
#include <vector> //vardnicas izdrukai
#include <cctype> //prieks isalpha un tolower funkcijam
#include <algorithm> //sort funkcijai
using namespace std;

/** bool faila_parbaude(string nosaukums);
Funkcija faila_parbaude(nosaukums) -
Atgriež kā rezultātu true, ja fails atveras,
Un false, ja failu atvērt neizdevās. **/
bool faila_parbaude(string nosaukums) {
    ifstream fin(nosaukums);
    return (bool)fin;
}

/** void vardnicas_izveide(string nosaukums, map<string, int>& vardnica);
Funkcija vardnicas_izveide(nosaukums, vardnica) -
Ieraksta argumentā vardnica visus tekstā atrastos blakus esošo vārdu pārus
Un to sastapšanas biežumu no faila nosaukums. **/
void vardnicas_izveide(string nosaukums, map<string, int>& vardnica) {
    ifstream fin(nosaukums);
    string rinda;

    while (getline(fin, rinda)) {
        list<string> vardi; // Saraksts vienas rindas vārdiem
        string vards = "";

        for (int i = 0; i < rinda.length(); i++) {
            if (isalpha(rinda[i])) {
                vards += tolower(rinda[i]);
            } else if (!vards.empty()) {
                vardi.push_back(vards);
                vards = "";
            }
        }
        if (!vards.empty()) vardi.push_back(vards); ///programma pedejo vardu vienkarsi aizmirst bez si

        if (vardi.size() >= 2) {
            auto it = vardi.begin();
            while (next(it) != vardi.end()) {
                string paris = *it + " " + *next(it);
                vardnica[paris]++;
                it++;
            }
        }
    }
    fin.close();
}

/** void top5(map<string, int>& vardnica);
Funkcija top5(vardnica) -
Izdrukā 5 visbiežāk sastopamos vārdu pārus dilstošā secībā. **/
void top5(map<string, int>& vardnica) {
    if (vardnica.empty()) {
        cout << "Tuksums..." << endl;
        return;
    }

    vector<pair<string, int>> biezakie(vardnica.begin(), vardnica.end());

    sort(biezakie.begin(), biezakie.end(), [](pair<string, int> a, pair<string, int> b) {
        return a.second > b.second;
    });

    cout << "Top 5:" << endl;
    for (int i = 0; i < biezakie.size() && i < 5; i++) { ///out of bounds kluda
        cout << i + 1 << ". " << biezakie[i].first << " : " << biezakie[i].second << endl;
    }
}


int main (){

int ok;

    do {
            string fails;
            map <string, int> vardnica;

            cout << "faila nosaukums: ";
            cin >> fails;

            if (faila_parbaude(fails) == true){
                vardnicas_izveide(fails, vardnica);
                top5(vardnica);
            } else cout << "Neveras vala.." << endl;

            cout << "Velreiz?: (1/0)" << endl;
            cin >> ok;

    } while (ok==1);

    return 0;

}
