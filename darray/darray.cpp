/*
AuPLa1301.
Jārealizē metodes:
konstruktors,
kopijas konstruktors,
destruktors,
array_avg() - aprēķina masīva elementu vidējo vērtību un atgriež to,
print_array() – izdrukā masīvu.
Masīva elementu aizpildīšanai realizēt privātu metodi fill_array().
*/

#include <iostream>
#include "darray.h"
using namespace std;

darray::darray(int size) : n(size) { ///size vertibu ieliek n ieksa
    a = new int(n);
    fill_array();
}

darray::darray(const darray& b) : n(b.n) { ///paskatas esosaja masiva un nokope tas izmeru
    a = new int(n);
    for (int i = 0; i < n; i++){ //nokope masivu, jauna masiva
      a[i] = b.a[i];
    }
}

darray::~darray(){
    delete[] a;
}

void darray::fill_array() {
    for (int i = 0; i < n; i++){
       a[i] = i + 1;
    }
}

double darray::array_avg() const { ///nolasa bet nemaina masivu
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    };
    return (double)sum / n;
}

void darray::print_array() const { //-||-
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << endl;
}
