#include <iostream>
using namespace std;
int main(){
    int num1;
    cout <<"escribe un numero entero:";
    cin>> num1;
    if (num1 ==0){
        cout <<"el numero es cero";
    }
    else if (num1 >0){
        cout << "el numero es positivo";
    }
    else {
        cout<< " el numero es negativo";
    }
    return 0;
}