#include <iostream>
using namespace std;
template <typename T>

int lielrindassumma(T** tab, int r, int k){
 T lsumma;     ///Pašlaik lielākā rindas elementu summa
 int lrinda;   ///Rindas numurs pašlaik lielākajai summai
 T summa;      ///Kārtējas rinas summaa

 summa = 0;
    for (int j = 0; j < k; j++)
        summa += tab[0][j];
    lsumma = summa;
    lrinda = 1;

    for (int i = 1; i < r; i++) {
        summa = 0;
        for (int j = 0; j < k; j++)
            summa += tab[i][j];
        if (summa > lsumma) {
            lsumma = summa;
            lrinda = i + 1;
        }
    }

    return lrinda;
}
    /// Lieot pakāpiena metodi rindu sumām
 ///Aprēķina 1.rindas elementu summu, uzskatu to par
 ///pašlaik lielāko summu.
 ///Aprēķina katras nākošās rindas elementu summu.
 ///Ja summa ir lielāka par pasļaik lielāko summu.
 ///Atgriež kā rezultātu rindas numuru
 ///pašlaik lielākās summas rindai.

}

int main(){

    int**mas;
    float**masf;
    double**masd;
    int rin = 2;
    int kol = 3;

///Pieprasa dinamisku atmiņu mas, masf un masd

///Aizpilda masīvu mas, masf un masd

cout<<lielrindassumma(mas, rin , kol)<<endl;
cout<<lielrindassumma(masf, rin , kol)<<endl; //float
cout<<lielrindassumma(masd, rin , kol)<<endl; //double

///Atbrīvo dinamisko atmiņu mas, masf, masd.
}
