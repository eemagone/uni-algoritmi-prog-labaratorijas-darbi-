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
using namespace std;

struct Node{
    int num;
    Node* next;
};

void pievienot(Node* &galvena, int vertiba){

    Node* kopija = galvena;

    while (kopija != nullptr){
        if (kopija->num == vertiba){
            cout<<"Ir jau sk. saraksta"<<endl;
            return;
        }
        kopija = kopija->next;
    }

    Node* jauns = new Node;
    jauns->num = vertiba;

    jauns->next = galvena;
    galvena = jauns;
}

void drukat(Node* galvena) {
    Node* kopija = galvena;
    while (kopija != nullptr) {
        cout << kopija->num << " ";
        kopija = kopija->next;
    }
    cout << endl;
}

void dzest(Node* &galvena) {
    while (galvena != nullptr) {
        Node* kopija = galvena;
        galvena = galvena->next;
        delete kopija;
    }
}

int main() {
    int ok;

    do {
        Node* saraksts = nullptr;
        int n;
        char izvele;

        do {
            cout << "Ievadiet skaitli, ko pievienot: ";
            cin >> n;

            pievienot(saraksts, n);

            cout << "Pasreizejais saraksts: ";
            drukat(saraksts);

            cout << "Vai pievienot vel kadu skaitli? (y/n): ";
            cin >> izvele;

        } while (izvele == 'y');

        dzest(saraksts);

        cout<<"atkartot? (1/0): ";
        cin>>ok;

    } while (ok == 1);

    return 0;
}
