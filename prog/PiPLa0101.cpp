#include <fstream>
#include <iostream>
using namespace std;



int main(){

    char simb;
    string rin;
    int reizes = 0;

    fstream fin ("teksts.txt", ios::in);
    if (!fin){cout<<"nav faila"<<endl; return 13;}

    cout<<"Ievadiet simbolu: "<<endl;
    cin.get(simb);

    getline (fin, rin);
    while (fin){
        for (int i = 0; i< rin.length(); i++){
            if (rin[i]==simb) reizes++;
        }
    getline (fin, rin);
    };

    cout<<"simbols '"<<simb<<"' sastopams " << reizes <<" reizes"<<endl;

    fin.close ();
}


