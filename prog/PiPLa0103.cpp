#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
    fstream fin;
    fstream fout;
    string rin;

    fin.open ("teksts.txt", ios::in);
    if (!fin){cout<<"nav faila"<<endl; return 13;}
    fout.open ("out.txt", ios::out);
    if (!fout){cout<<"nav faila"<<endl; return 13;}

    getline(fin, rin);
    while (fin){
        for (int i = 0; i< rin.length(); i++){
            if(rin[i] != ' ') fout.put(rin[i]);
        }
        fout<<endl;
        getline(fin, rin);
    };

    fin.close ();
    return 0;
}
