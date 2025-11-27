/*
AuPLa1301. Izveidot C++ klasi darray, izmantojot objektorientētās programmēšanas līdzekļus un strukturējot programmu vismaz trīs failos. Klases hederi obligāti novietot atsevišķā hedera failā (darray.h). Visas metodes realizēt ārpus hedera faila – speciālā C++ failā (darray.cpp). Funkcija main ievietojama vēl citā C++ failā (main.cpp).
Klases dati pēc noklusēšanas ir slēpti (private), bet metodes atklātas (public).
Klase darray attēlo dinamisku veselu skaitļu masīvu ar n elementiem.
Jārealizē metodes:
konstruktors,
kopijas konstruktors,
destruktors,
array_avg() - aprēķina masīva elementu vidējo vērtību un atgriež to,
print_array() – izdrukā masīvu.
Masīva elementu aizpildīšanai realizēt privātu metodi fill_array().

Izveidot klasi darray pārbaudošu programmu, kurā tiek izveidoti divi klases objekti – automātiskā (tiešā) veidā un dinamiski un objektiem tiek pielietotas metodes.
*/

#include <iostream>
#include "darray.h"
using namespace std;

int main() {
darray a(5);
cout << "Automatic object array: ";
a.print_array();
cout << "Average: " << a.array_avg() << endl;


darray* b = new darray(5);
cout << "Dynamic object array: ";
b->print_array();
cout << "Average: " << b->array_avg() << endl;


delete b;
return 0;
}
