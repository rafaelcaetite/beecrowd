#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ( ) {
 
    int distancia;
    double consumo , consumomedio;
    
    cin >> distancia >> consumo;
    
    consumomedio = distancia / consumo;
    
    cout << fixed << setprecision (3) << consumomedio << " km/l\n";
    
    
    return 0;
}