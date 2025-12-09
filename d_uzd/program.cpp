#include "program.h"
#include <iostream>
using namespace std;

//Konstruktors, ar kuru tiek padotas sākotnējās vērtības
Auto::Auto(double degv, double pat, double atr) {
    degviela = degv;
    paterins = pat;
    optAtrums = atr;
}

//Destruktors, kurš paziņo par objekta likvidēšanu
Auto::~Auto() {
    cout<<"Auto objekts tiek likvidets..."<<endl;
}

//Metode "Mainīt" ar trīs parametriem, kas izmaina vērtības par attiecīgo daudzumu (nevis nomaina)
void Auto::mainit(double pDeg, double pPat, double pAtr) {
    degviela += pDeg;
    paterins += pPat;
    optAtrums += pAtr;

//lai izvairitos no neiespejamam vērtībām
    if (degviela < 0) degviela = 0;
    if (paterins <= 0) paterins = 1;
    if (optAtrums <= 0) optAtrums = 1;
}

//Metode "Drukāt", kas izdrukā automašīnas raksturlielumus
void Auto::drukat() const {
    cout << "Degviela: " << degviela << " l" << endl;
    cout << "Paterins: " << paterins << " l/100km" << endl;
    cout << "Optimalais atrums: " << optAtrums << " km/h" << endl;
}

//Metode "Aprēķināt", kas izdrukā atlikušo kilometru skaitu pie optimāliem apstākļiem un nepieciešamo laiku, lai šo attālumu veiktu.
void Auto::aprekinat() const {
    double distance = (degviela / paterins) * 100.0;
    double laiks = distance / optAtrums;
    cout << "Attalums: " << distance << " km" << endl;
    cout << "Nepieciesamais laiks: " << laiks << " h" << endl;
}
