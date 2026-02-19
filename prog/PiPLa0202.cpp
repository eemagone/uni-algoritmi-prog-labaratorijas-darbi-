#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main(){

    vector<int> intV = {11,22,33};
    list<int> intL = {11,22,33};
    int sk = 11;

    for (auto &a: intV) cout<<a<<" "<<endl;

    auto iV = find (intV.begin(), intV.end(), sk);

    while (iV != intV.end()){
       iV = intV.erase(iV);
       iV = find (intV.begin(), intV.end(), sk);
    }

    for (auto &a: intV) cout<<a<<" "<<endl; //22 33
////////////////////////////////////////////////////////////
cout<<endl<<endl;

    for (auto &a: intL) cout<<a<<" "<<endl;

    auto iL = find (intL.begin(), intL.end(), sk);

    while (iL != intL.end()){
       iL = intL.erase(iL);
       iL = find (intL.begin(), intL.end(), sk);
    }

    for (auto &a: intL) cout<<a<<" "<<endl; //22 33

////////////////////////////////////////////////////////////
cout<<endl<<endl;

    ///list objekta var izdzest visus elementus ar
    ///dotu vertibu ar vienu metodes izsaukumu
    list<int> intL2 = {11,22,33,11};
    intL2.remove(sk);
    for (auto &a: intL) cout<<a<<" "<<endl; //22 33

////////////////////////////////////////////////////////////
cout<<endl<<endl;

    vector<int> intV2 = {11,22,33,11};
    for (auto &e: intV2) cout<<e<<" "; //11 22 33 11
    cout<<endl;
    intV2.erase(remove(intV2.begin(), intV2.end(), sk), intV2.end());
    for (auto &e: intV2){ cout<<e<<" "; }; //22 33
}

