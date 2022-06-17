#include <iostream>
#include <cmath>
#include <iomanip>
 
using namespace std;
 
int main ( ) {
 
    double raio, volume;
    
    cin >> raio;
    
    volume = 4.0/3 * 3.14159 * pow (raio, 3);
    
    cout << "VOLUME = " << fixed << setprecision (3) << volume << endl;
 
    return 0;
}