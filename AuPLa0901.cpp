#include <iostream>
using namespace std;


/*
float mediana(int * m, int n);
Funkcija mediana(m, n) -
Atgriez ka rezultatu medianu no masiva m, arguments n ir masiva skaitlu skaits.
*/

float mediana(int * m, int n){

   float a = 0;

      if (n % 2 == 0) {
        a = (m[n/2 - 1] + m[n/2]) / 2.0; //para
    } else {
        a = m[n/2]; //nepara
    }

    return a;
}

/*
int getNatural():
Atgriež kā rezultātu naturālu skaitli n.
*/

int getNatural() {
    int n;

    do {
        cout << "Ievadiet naturalu skaitli (>0): ";
            cin >> n;
            if (cin.fail() || n <= 0) {
                cout << "Nav naturals sk.(>0)" << endl << endl;
                cin.clear();
                cin.ignore(1000, '\n');
            } else break;

    } while (true);

    return n;
}

int main(){

    int ok;

        do{
           int n;
           const int n_max = 50;
           int v[n_max]; //statiskais

           n = getNatural();

           int * m = new int[n]; //dinamiskais

           cout<<"Ievadi "<<n<<" skaitlu parus (pirmais masivs un otrais masivs): "<<endl;
           for (int i=0; i<n; i++){
            cin>>v[i]>>m[i];
            cout<<endl;
           }

           cout<<"Pirma masiva mediana: "<<mediana(v, n)<<endl;
           cout<<"Otra masiva mediana: "<<mediana(m, n)<<endl;

            cout<<"Turpinat? (1/0) ";
            cin>>ok;

        } while (ok == 1);

    return 0;
}
