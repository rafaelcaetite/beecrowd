#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ( ) {

    int c1, n1, c2, n2;
    double v1, v2, t1, t2, t;
    
    cin >> c1 >> n1 >> v1;
    cin >> c2 >> n2 >> v2;
    
    t1 = n1 * v1;
    t2 = n2 * v2;
    
    t= t1 + t2;
    
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision (2) << t << endl;
    
    return 0;
}