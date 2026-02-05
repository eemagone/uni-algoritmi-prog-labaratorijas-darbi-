// txt6get.cpp
#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
    fstream fin;
    int biezumi[256] = {0};
    string rin;

    fin.open ("teksts.txt", ios::in);
    if (!fin){cout<<"nav faila"<<endl; return 13;}

    getline(fin, rin);
    while (fin){
        for (int i = 0; i< rin.length(); i++){
            biezumi[rin.at(i)]++;
        }
        getline(fin, rin);
    };

    fin.close ();
    for (int i = 0; i < 256; i++){
        if (biezumi[i]) cout<< (char)i<<'='<<biezumi[i]<<endl; //ifa ieksa biezumi interpretes ka true ja bus kaut kada vertiba
    }

    return 0;
}

