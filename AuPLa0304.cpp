#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ievadi n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cout << string(i, '*') << endl;

    return 0;
}
