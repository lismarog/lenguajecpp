#include <iostream>

using namespace std;

float Cuadrado (float);
int main(){
    
    float num; 
    cin >> num; 
    
    cout << "El cuadrado del numero " << "" << num << " es: " << Cuadrado(num) << endl;

    return 0;
}

float Cuadrado (float n){
    return n*n; 
}
