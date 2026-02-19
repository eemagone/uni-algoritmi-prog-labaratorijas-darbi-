#include <iostream>
#include <vector>
#include <list>
using namespace std;

// Funkcija darbam ar vector
void insertVector(vector<int>& v, int value, int n) {
    if (n <= 0) {
        cout << "Nepareizs kārtas numurs!" << endl;
        return;
    }

    if (n > v.size())
        v.push_back(value);
    else
        v.insert(v.begin() + (n - 1), value);
}

// Funkcija darbam ar list
void insertList(list<int>& lst, int value, int n) {
    if (n <= 0) {
        cout << "Nepareizs kārtas numurs!" << endl;
        return;
    }

    if (n > lst.size()) {
        lst.push_back(value);
    } else {
        auto it = lst.begin();
        advance(it, n - 1);
        lst.insert(it, value);
    }
}

// Funkcija izvadīšanai
template <typename T>
void printContainer(const T& container) {
    for (const auto& elem : container)
        cout << elem << " ";
    cout << endl;
}

int main() {
    int size, number, n;

    cout << "Ievadiet virknes elementu skaitu: ";
    cin >> size;

    vector<int> vec;
    list<int> lst;

    cout << "Ievadiet virknes elementus:" << endl;
    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;
        vec.push_back(x);
        lst.push_back(x);
    }

    cout << "Ievadiet skaitli, kuru iespraust: ";
    cin >> number;

    cout << "Ievadiet poziciju n (n >= 1): ";
    cin >> n;

    insertVector(vec, number, n);
    insertList(lst, number, n);

    cout << "\nRezultats (vector): ";
    printContainer(vec);

    cout << "Rezultats (list): ";
    printContainer(lst);

    return 0;
}

