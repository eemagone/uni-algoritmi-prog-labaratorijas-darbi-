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

    auto iL = find (intL.begin(), intL.end(), sk);

    if (iL != intL.end()){
        cout<<"Exists: "<<*iL<<endl; //11
    } else
        cout<<"NOT FOUND"<<endl;
}
