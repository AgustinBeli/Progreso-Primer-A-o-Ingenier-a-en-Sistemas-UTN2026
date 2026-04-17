#include <iostream>
using namespace std;

typedef int Entero;
typedef string Cadena;

int sumar (int a, int b) {
    
    
    return a + b;
}
int main (int a, int b) {
    
    int x,y;
    cout << "Ingrese dos valores: ";
    cin >> x >>y;

    int r = sumar (x,y);
    cout << "La suma es: r";

}