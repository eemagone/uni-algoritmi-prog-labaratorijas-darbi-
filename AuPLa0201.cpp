#include <iostream>
using namespace std;

int main(){
    float f, c;

    cout<<"Ievadi f:" << endl;
    cin>>f;

    c = 5./9 * (f-32);

    cout.precision(1);
    cout.setf (ios::fixed);

    cout<<"Celsijs: "<< c;

    return 0;
}
