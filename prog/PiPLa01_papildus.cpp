#include <fstream>
#include <iostream>
using namespace std;



int main(){

    char simb, fsimb;
    string rin;
    int reizes = 0;

    fstream fin ("teksts.txt", ios::in);
    if (!fin){cout<<"nav faila"<<endl; return 13;}

    cout<<"Ievadiet simbolu: "<<endl;
    cin.get(simb);

    fin.get(fsimb);
    while (fin){
        if (fsimb==simb) reizes++;
    fin.get(fsimb);
    };

    cout<<"simbols '"<<simb<<"' sastopams " << reizes <<" reizes"<<endl;

    fin.close ();
}


