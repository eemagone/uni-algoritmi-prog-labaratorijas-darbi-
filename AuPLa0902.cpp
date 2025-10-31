#include <iostream>
#include <vector>
using namespace std;

/*
float mediana(vector<int> m, int n)
Funkcija atgriež medianu no masīva m (garums n).
Pieņemts, ka masīvs jau ir sakārtots augošā secībā.
*/
float mediana(const vector<int>& m, int n) {
    if (n % 2 == 0)
        return (m[n/2 - 1] + m[n/2]) / 2.0;
    else
        return m[n/2];
}

/*
int getNatural()
Atgriež naturālu skaitli (>0).
*/
int getNatural() {
    int n;
    do {
        cout << "Ievadiet naturalu skaitli (>0): ";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cout << "Nav naturals skaitlis (>0)" << endl << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        } else break;
    } while (true);
    return n;
}

int main() {
    int ok;
    do {
        int n = getNatural();
        vector<int> m;
        m.reserve(n); // rezervē vietu atmiņā

        cout << "Ievadiet " << n << " skaitlus augosa secība:" << endl;
        for (int i = 0; i < n; i++) {
            int val;
            cout << "m[" << i << "] = ";
            cin >> val;
            m.push_back(val); //pievieno vektora
        }

        cout << "Vektora mediana: " << mediana(m, n) << endl;

        cout << "Turpinat? (1/0): ";
        cin >> ok;

    } while (ok == 1);

    return 0;
}
