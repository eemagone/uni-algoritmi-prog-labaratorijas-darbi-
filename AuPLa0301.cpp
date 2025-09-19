#include <iostream>
using namespace std;

int main(){

    int skaitlu_daudzums;
    int lielakais_skaitlis;
    int skaitlis;


    ///Pieprasa skaitlu skaitu, =>1

    ///Nodrosina n korektumu
    ///Nosaka lielako skaitli no dotajiem
        ///Izmanto pakapiena metodi

    ///Izdruka skaitlu vertibu



    cout << "Cik daudz veselus skaitļus vēlies ievadīt?: " << endl;
    cin >>skaitlu_daudzums;


if (skaitlu_daudzums > 0){
    cout << "Ievadiet " << skaitlu_daudzums << " veselus skaitļus: " << endl;

    cin >> skaitlis;
    lielakais_skaitlis = skaitlis; ///pirmais ievaditas skaitlis klust par lielako ar kuru salidzinas


    for (int i = 1; i < skaitlu_daudzums; i++){ ///sakas no 1, prasa tik ilgi ievadit skaitlus lidz nav lielaks par i
        cin >> skaitlis;

        if (skaitlis > lielakais_skaitlis){
        lielakais_skaitlis = skaitlis;
    }

    }



cout << "Lielākais cipars: " << lielakais_skaitlis;

} else{
    cout << "Ievadiet skaitli kas ir vesels un nav 0!" << endl;

};



return 0;

}
