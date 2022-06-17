#include <iostream>
#include <iomanip> 
 
using namespace std;
 
int main ( ) {
    
    int horas, velocidade, distancia;
    double litros;
    
    cin >> horas >> velocidade;
    
    distancia = velocidade * horas;
    
    litros = distancia/12.0;
    
    cout << fixed << setprecision (3) << litros << endl;
 
    return 0;
}