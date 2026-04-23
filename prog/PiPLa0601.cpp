/// Number.cpp
#include <iostream>
using namespace std;
template<class X> ///vareja ari rakstit template<typename X>

class Number {
    X a;
    public:
    Number(X x) { a = x; };
    void print() const { cout << a << endl; };

    friend ostream& operator<<(ostream &out, const Number<X> &n){
        out<<n.a<<endl;
        return out;
        }


    void operator= (const Number<X> &n){
        a = n.a;
    }

};

int main() {
    Number<int> n(3);
    n.print(); //3

    cout<<n<<endl; //3

    Number<int> n2(17);
    n2.print(); //17
}

