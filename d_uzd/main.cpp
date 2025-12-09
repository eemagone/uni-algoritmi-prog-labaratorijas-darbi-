/*
Emīls E. Magone, em25106
_____________________________________________________________________________________________________________________________________________________________

D4. Izveidot klasi "Auto" - Vehicle, kurā tiek glabāti trīs skaitļi - degvielas daudzums tvertnē,
minimālais degvielas patēriņš uz 100 km un optimālais braukšanas ātrums.

Klasei izveidot šādas metodes:
    (1) konstruktors, ar kuru tiek padotas sākotnējās vērtības,
    (2) destruktors, kurš paziņo par objekta likvidēšanu,
    (3) metode "Mainīt" - change ar trīs parametriem, kas izmaina vērtības par attiecīgo daudzumu (nevis nomaina),
    (4) metode "Drukāt" - print, kas izdrukā automašīnas raksturlielumus,
    (5) metode "Aprēķināt" - calculate, kas izdrukā atlikušo kilometru skaitu pie optimāliem apstākļiem un nepieciešamo laiku, lai šo attālumu veiktu.
_____________________________________________________________________________________________________________________________________________________________
Programmas gala versija izstrādāta: 10.12.2025
*/

#include "program.h"
#include <iostream>
using namespace std;

int main() {

    Auto Honda(50, 6.5, 90);

    Honda.drukat();

    Honda.aprekinat();

    cout<<"\n\nAizbrauc lidz Siguldai\n\n";

    Honda.mainit(-10, 0.5, 20);

    Honda.drukat();

    Honda.aprekinat();

    return 0;
}
