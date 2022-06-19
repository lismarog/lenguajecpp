/*
multiplicacion de numeros con arreglos.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    
    int n, num[50], sum =0, mult =1;
    
    cout << "Ingrese la cantidad de numeros que tendrá el vector: " << endl; 
    cin >> n;
    
    for(int i=0; i<n; i++){
        cout << "Ingrese el #" << i+1 << endl; 
        cin >> num[i];
        mult *= num[i];
        
    }
    cout << "La multiplicacion de los numeros es: " << mult << endl;
    
    getch();
    return 0;
}
