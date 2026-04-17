#include <iostream>
using namespace std;


int main () {
    
    cout << "ingrese 2 números" << endl;

    int a,b;
    cin >> a >> b;

    if(b!=0){

        double c = a/b;
        cout << c;

    }else {
        cout << "error" << endl;
    }

    return 0;
}