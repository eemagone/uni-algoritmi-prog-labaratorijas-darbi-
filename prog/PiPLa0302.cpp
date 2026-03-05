#include <iostream>
using namespace std;

struct elem {
    float num;
    elem *next;
};

void dzesana(elem* &first, elem* &last, float x){

 elem* p = first;
 elem* prev = NULL;

     while (p != NULL) { //ejam lidz saraksta beigam
        if (p->num == x) {
            elem *temp = p; //ja jadzes elem.

            if (p == first) {
                first = first->next; //parbidam sakumu
                p = first; //jaunais pasreizejais ir jaunais sakums
            } else {
                prev->next = p->next; //parlecam pari elem.
                if (p == last) last = prev; //ja dzesam pedejo, atjaunojam last
                p = p->next;
            }
            delete temp; //atbrivojam atminu
        } else {
            prev = p; //ja nesakrit iet talak
            p = p->next;
        }
    }
}

int main() {
    elem *first = NULL, *last = NULL, *p, *prev = NULL;

    float i;
    cout << "Ievadi savu sk. sarakstu (beidzot ievadi 0):" << endl;
    cin >> i;

    while (i != 0) {
        p = new elem;
        p->num = i;
        p->next = NULL;

        if (first == NULL) {
            first = last = p;
        } else {
            last->next = p;
            last = p;
        }
        cin >> i;
    }

    float x;
    cout << endl << "Kadu skaitli izdzest?" << endl;
    cin >> x;

    p = first; ///dzesana
    prev = NULL;

   dzesana(first, last, x);

    cout << "Saraksts pec dzesanas: "; ///izvade
    for (p = first; p != NULL; p = p->next) {
        cout << p->num << " ";
    }
    cout << endl;


    p = first; ///iznicinam
    while (p != NULL) {
        first = first->next;
        delete p;
        p = first;
    }

    return 0;
}
