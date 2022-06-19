/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main()
{
    char letra[];
    
    cin >> letra;
    
    for(int indice = 0; letra[indice] != '\0'; ++indice){
        if(letra[indice] >= 'a' && letra[indice] <= 'z' ){
           letra[indice] = toupper(letra[indice]);
        }else if(letra[indice] >= 'A' && letra[indice] <= 'Z'){
           letra[indice] = tolower(letra[indice]);
        }
    }
    
       switch(letra){
        case 'A': cout << "10.00 a.m." << endl;
        break;
        case 'B': cout << "1.00 p.m." <<endl;
        break;
        case 'C': cout << "11.00 a.m." <<endl; 
        break;
        default:
        cout << "Grupo no válido"<<endl;
    }

    return 0;
}
