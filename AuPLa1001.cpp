#include <iostream>
using namespace std;

int aprekina(int n){
    if (n == 0) return 2;
    else if (n == 1) return 3;
    else return 4 * aprekina(n - 1) + 3 * aprekina(n - 2);
}

int main(){
    cout<<aprekina(0)<<endl; //2
    cout<<aprekina(1)<<endl; //3
    cout<<aprekina(2)<<endl; //18
    return 0;
}
