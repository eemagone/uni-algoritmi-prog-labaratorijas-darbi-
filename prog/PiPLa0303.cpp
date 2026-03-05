#include <iostream>
#include <map>
#include <string>
#include <list>
#include <climits>

using namespace std;

int main() {
    list<string> vardi = {"suns", "kakis", "suns", "emils", "emils", "emils", "janis"};

    map<string, int> biezumi;
    for (const string& v : vardi) {
        biezumi[v]++;
    }

    if (biezumi.empty()) return 0;

    int min_b = INT_MAX;
    int max_b = INT_MIN;

    for (auto const& [vards, skaits] : biezumi) { //min un max
        if (skaits < min_b) min_b = skaits;
        if (skaits > max_b) max_b = skaits;
    }

    cout << "Visretak sastopamie vardi (biezums " << min_b << "): ";
    for (auto const& [vards, skaits] : biezumi) {
        if (skaits == min_b) cout << vards << " ";
    }

    cout << endl << "Visbiezak sastopamie vardi (biezums " << max_b << "): ";
    for (auto const& [vards, skaits] : biezumi) {
        if (skaits == max_b) cout << vards << " ";
    }
    cout << endl << endl;

    auto it = biezumi.begin(); ///dzesana
    while (it != biezumi.end()) {
        if (it->second == min_b || it->second == max_b) {
            it = biezumi.erase(it);
        } else {
            ++it;
        }
    }

    cout << "Vardi, kas palika pec dzesanas:" << endl; ///izvade
    for (auto const& [vards, skaits] : biezumi) {
        cout << vards << ": " << skaits << endl;
    }

    return 0;
}
