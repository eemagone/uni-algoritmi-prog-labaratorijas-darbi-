#include <iostream>
#include <string>
using namespace std;

int main(){
int ok;

do{

   string n;
   char simbols;
   int reizes=0;

    cout << "Ievadi teksta rindinu (>80 simboliem): ";
    getline(cin, n); ///<string> funkcija


    cout << endl;
    cout << "Ievadiet kuru simbolu vēlaties atrast: ";
    cin >> simbols;
    cout << endl;

    for (int i=0;i<n.length();i++){
        if (n[i] == simbols){ ///pieliekot [i] pie n tas klust par char ari
           reizes+=1;}
    }

    cout<<"Simbols: "<<simbols<<" ir sastopams "<<reizes<<endl;
    cout << endl;


cout << " Vai turpināt (1) vai beigt (0)?: ";
cin >> ok;
cout << endl;
cout << endl;
}while (ok == 1);

    return 0;
}

