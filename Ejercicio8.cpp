#include <iostream>

using namespace std;

int main(void){

    int a=1;
    cout << "Ingrese un valor: ";
    cin >> a;

    for (int i = 1; i<=a; i++){
        cout << i << " ";
    }
    for (int b=a-1; 1<=b; b--){
        cout << b << " ";
    }

    return 1;
}