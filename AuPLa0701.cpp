#include <iostream>
using namespace std;

int main(){
int ok;

do{

   char n[81];
   char simbols;
   int reizes=0;

    cout << "Ievadi teksta rindinu (>80 simboliem): ";
    cin.getline(n, 81);


    cout << endl;
    cout << "Ievadiet kuru simbolu vēlaties atrast: ";
    cin >> simbols;
    cout << endl;

    for (int i=0;i<81;i++){
        if (n[i] == simbols){
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

