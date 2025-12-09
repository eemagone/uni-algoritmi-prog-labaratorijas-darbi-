/*
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

*/


class Auto {

    double degviela, paterins, optAtrums;

public:

    Auto(double degv, double pat, double atr);
    ~Auto();

    void mainit(double pDeg, double pPat, double pAtr);
    void drukat() const; //vajag lai tikai metode lasa nevis maina
    void aprekinat() const;

};
