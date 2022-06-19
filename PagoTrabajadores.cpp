#include <iostream>

using namespace std;

int main()
{
    int hrsLab, valHor, hrsExt, ValPag, pagoDoble, pagoTriple, hrsLabExtra, valTot, hrs, pagoDoblex;     
    cin >> hrsLab >> valHor;
    
    hrsExt = hrsLab - 40;
    ValPag = hrsLab * valHor; 
    hrsLabExtra = hrsExt - 8;
    hrs = hrsExt - hrsLabExtra;
    
     if(hrsExt > 0 && hrsExt <= 8){
        pagoDoble = (hrsExt * valHor) * 2;
        ValPag = 40 * valHor; 
        valTot = ValPag + pagoDoble;
        
     }else if(hrsExt > 8){
            pagoDoblex = hrs * (valHor * 2);
            pagoTriple = hrsLabExtra * (valHor * 3);
            ValPag = 40 * valHor; 
            valTot = ValPag +pagoDoblex + pagoTriple;
            
        }else{
                valTot = ValPag;
            }
            
        cout << valTot  << endl;
        
    return 0;
}
