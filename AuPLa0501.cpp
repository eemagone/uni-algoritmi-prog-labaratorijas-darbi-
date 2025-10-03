/// AuPLa0401.cpp
/****************************************************************************
AuPLa0401. Sastādīt C++ programmu, kas pieprasa ievadīt N veselus skaitļus un
nosaka garākās stingri augošas virknes garumu.
Jābūt iespējai programmu izpildīt atkārtoti, neizejot no programmas.
*****************************************************************************/
/// Autors: Uldis Straujums
/// Programma izveidota: 26.09.2022.
/// Mainīts: 26.09.2024. Izlabota vairāku stingri augošu virkņu apstrāde

#include<iostream>
using namespace std;


int dotaiscipskaits(int n, int cip){

    int cskaitlis = 0; ///cipara cip n skaits pierakstā
    do{
            if (n%10==cip){ ///ja 399 izdalot ar 10 sakrit ar doto ciparu tad skaitlis++
                cskaitlis++;
            }
        n/=10; ///samazinam skaitli par 1 ciparu
    }while(n>0);
    return cskaitlis;

}


int main(){

int ok;
    do{
       int n;    /// Skaitļu skaits
       int ievade;

        /// Pieprasa ievadīt skaitļu skaitu n,
        /// Nodrošina, ka skaits n ir korekts (n>=1)
        do{
          cout<<"Ievadiet skaitli: ";
          cin >> n;
          if(n<1) cout<<"Kļūdaina vērtība. Jāievada N, N>=1."<<endl;
        }while(n<1);

        do{
          cout<<"Ievadiet kura cipara daudzumu velaties parbaudit: ";
          cin >> ievade;
          if((ievade<0)&&(ievade>9)) cout<<"Kļūdaina vērtība."<<endl;
        }while((ievade<0)&&(ievade>9));

        cout<<endl;
        cout<<"Cipars "<<ievade<<" ir "<<dotaiscipskaits(n, ievade)<<" reizes dotajā naturālajā skaitlī"<<endl<<endl;

      cout << " Vai turpināt (1) vai beigt (0)?" << endl;

      cin >> ok;
    } while (ok == 1);

    return 0;
}

