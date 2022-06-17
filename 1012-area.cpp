#include <iostream>
#include <iomanip>
#include <cmath>
 
using namespace std;
 
int main ( ) {
 
    double a, b, c;
    
    cin >> a >> b >> c;
    
    cout << "TRIANGULO: " << fixed << setprecision (3) << (a * c) / 2.0 << endl;
    cout << "CIRCULO: " << fixed << setprecision (3) << pow (c, 2) * 3.14159 << endl;
    cout << "TRAPEZIO: " << fixed << setprecision (3) << ((a + b) * c) / 2.0 << endl;
    cout << "QUADRADO: " << fixed << setprecision (3) << pow (b, 2) << endl;
    cout << "RETANGULO: " << fixed << setprecision (3) << a * b << endl;
    return 0;
}