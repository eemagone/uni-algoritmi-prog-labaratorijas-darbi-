#include <iostream>
using namespace std;

int main(){
int ok;
int c;




    do {
        int max_c = 0;

        cout<<"Ievadi naturalu skaitli: ";
        cin>>c;

        while (c > 0 ){
            int jauns = c % 10;
            if (jauns > max_c){
                max_c = jauns;
            }
            c /= 10;
        };

        cout<<'\n';
        cout<<"Lielakais cipars: "<<max_c<<endl;

        cout<<"Turpinat? (1/0): ";
        cin>>ok;

    }while(ok == 1);

    return 0;
}
