#include <iostream>
using namespace std;

struct elem
{
    float num;
    elem *next;
};

int main(){

int maybe;

do{
    elem *first = NULL, *last = NULL, *p;

    float i;
    cout << "Ievadi savu sk. sarakstu (kad beidzat ievadat 0):" << endl;
    cin >> i; ///ievadīšana, kamēr nav sastapta 0

    while (i != 0)
    {
        p = new elem;       // izveido objektu
        p->num = i;         // aizpilda ar nolasīto vērtību
        p->next = NULL;     // norāde uz nākošo - tukša!

        if (first == NULL){
            first = last = p; // ja saraksts tukšs
        }else{
            last->next = p; // ja saraksts nav tukšs, pieliek galā
            last = last->next;
        }

        cin >> i;
    }

    float x; // Lietotājs ievada sk.
    cout << endl << "Kadu cip. meklejat?" << endl;
    cin >> x;

    bool found = false;
        for (p = first; p != NULL; p = p->next)
        {
            if (p->num == x)
            {
                found = true;
            }
        }

    if (found)
        cout << endl <<"ir" << endl;
    else
        cout << endl <<"nav" << endl;

    p = first; ///saraksta iznīcināšana
    while (p != NULL)
    {
        first = first->next;
        delete p;
        p = first;
    }

    cout << endl << "Turpinat? (1/0): " << endl;
    cin >> maybe;

} while(maybe == 1);

    return 0;
}


