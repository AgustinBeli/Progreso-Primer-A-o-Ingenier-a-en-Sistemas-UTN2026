#include <iostream>
using namespace std;


int main () {

    cout << "viene un auto por la derecha? si/no" << endl;
    string a;
    cin >> a;

    if (a=="si" || a=="no"){
        cout <<"espera! viene un auto por la izquierda? si/no" << endl;
        string b;
        cin >> b;

        if(a=="no" && b=="no"){
            cout <<"PUEDES cruzar" << endl;
        }else{
            cout <<"NO puedes cruzar aún" << endl;
        }
        
    }
    return 0;
}