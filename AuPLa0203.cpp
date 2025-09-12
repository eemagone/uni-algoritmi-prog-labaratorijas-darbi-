#include <iostream>
using namespace std;

int main(){
    float x, y;

    cout << "Ievadi x vertibu:" << endl;
    cin >> x;

    if (x < -2){
        y = 0;
    }
    else if (x >= -2 && x < -1){
        y = -x - 2;
    }
    else if (x >= -1 && x <= 1){
        y = x;
    }
    else if (x > 1 && x < 2){
        y = -x + 2;
    }
    else if (x >= 2){
        y = 0;
    }

    cout << "Funkcijas vertiba: " << y << endl;

    return 0;
}
