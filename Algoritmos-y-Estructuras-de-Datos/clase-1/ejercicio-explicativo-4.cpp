#include <iostream>
using namespace std;


int main () {
    int a,b;
    char op;
    double resultado;

    int error = 0;

    cout << "Ingrese la expresión: " << endl;
    cin >> a >> op >> b;

    if (op=='+'){
        resultado = a+b;
    }else{
        if (op=='-'){
            resultado = a-b;
        }else{
            if (op=='*'){
                resultado = a*b;
            }else{
                if (op=='/'){
                    if(b!=0){
                         resultado = a/b;
                    }else{
                        cout << "ERROR b no puede ser 0, utilizar otro valor" << endl;
                        error=1;
                    }
                }else{
                    cout << "ERROR no has introducido ningún valor" << endl;
                    error=1;
                }
            }
        }
    }

    if (error==0){
        cout << a << op << b << "=" << resultado << endl;
    }
    return 0;
}