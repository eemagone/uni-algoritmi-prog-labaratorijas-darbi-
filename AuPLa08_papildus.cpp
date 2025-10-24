#include <iostream>
#include <string>
using namespace std;

// Funkcija center(s, garums, aizpilde)
string center(const string& s, int garums, char aizpilde = ' ') {
    int n = s.size();
    if (garums <= n)
        return s;

    int kopā = garums - n;
    int paKreisi = kopā / 2;
    int paLabi = kopā - paKreisi;

    return string(paKreisi, aizpilde) + s + string(paLabi, aizpilde);
}

int main() {
    string s;
    int garums;
    char aizpilde;

    cout << "Ievadiet virkni: ";
    getline(cin, s);

    cout << "Ievadiet kopējo garumu: ";
    cin >> garums;

    cout << "Ievadiet aizpildes simbolu (vai Enter, lai lietotu atstarpi): ";
    cin.ignore(); // attīrīt buferi
    aizpilde = cin.get();
    if (aizpilde == '\n') aizpilde = ' ';

    string rezultats = center(s, garums, aizpilde);
    cout << "Rezultāts: [" << rezultats << "]" << endl;

    return 0;
}
