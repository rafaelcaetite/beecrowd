#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ( ) {
 
 string n;
 double f, v, t;
 
 cin >> n;
 cin >> f;
 cin >> v;
 
 t = f + (0.15 *v);
 
 cout << "TOTAL = R$ " << fixed << setprecision (2) << t << endl;
 
    
 
    return 0;
}