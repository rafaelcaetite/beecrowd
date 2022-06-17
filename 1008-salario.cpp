#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main ( ) {
 
   int num, horatrab;
   double recebe, salario;
   
   cin >> num >> horatrab >> recebe;
   
   salario = horatrab * recebe;
   
   cout << "NUMBER = " << num << endl;
   cout << "SALARY = U$ " << fixed << setprecision (2) << salario << endl;
   
    return 0;
}