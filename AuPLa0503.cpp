#include <iostream>
using namespace std;

// Funkcija, kas atgriež lielāko no diviem skaitļiem, izmantojot nosacījuma operatoru
int lielakais(int a, int b) {
    return (a > b ? a : b);
}

// Funkcija, kas ieraksta lielāko skaitli iekš a, mazāko iekš b (pēc atsauces)
void lielmaz(int &a, int &b) {
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    int ok;

    do {
        int n;

        // Prasa ievadīt N
        do {
            cout << "Ievadiet, cik skaitļus vēlaties salīdzināt (N >= 2): ";
            cin >> n;
            if (n < 2) {
                cout << "Kļūdaina vērtība. N jābūt >= 2." << endl;
            }
        } while (n < 2);

        int skaitlis, liel;

        // Ievada pirmo skaitli
        cout << "Ievadiet skaitli 1: ";
        cin >> skaitlis;
        liel = skaitlis;

        // Pārējie skaitļi + salīdzināšana
        for (int i = 2; i <= n; i++) {
            cout << "Ievadiet skaitli " << i << ": ";
            cin >> skaitlis;

            liel = lielakais(liel, skaitlis);
        }

        cout << "Lielākais skaitlis ir: " << liel << endl;

        // Papildu piemērs ar lielmaz funkciju:
        int a, b;
        cout << "\nDemonstrācija ar funkciju lielmaz(a, b):" << endl;
        cout << "Ievadiet a: ";
        cin >> a;
        cout << "Ievadiet b: ";
        cin >> b;

        lielmaz(a, b);

        cout << "Pēc lielmaz(a, b) izsaukuma: a = " << a << ", b = " << b << endl;

        // Vai atkārtot?
        cout << "\nVai vēlaties turpināt? (1 = jā, 0 = nē): ";
        cin >> ok;

        cout << endl;

    } while (ok == 1);

    return 0;
}
