#include <iostream>
using namespace std;

void permutar (int& a, int& b){
    int aux = a;
    a = b;
    b = aux;
}

int main () {
    
    int x, y;
    cout << "Ingrese dos valores";
    cin >> x >> y;

    return 0;
}