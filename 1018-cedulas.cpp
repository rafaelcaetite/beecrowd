#include <iostream>
 
using namespace std;
 
int main() {
 
 int n, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
 
 cin >> n;

 cout << n << endl;
   
    while (n>0) {
        if (n>=100) {
            n= n-100;
            n100++;
        }
            else if (n>=50) {
            n= n-50;
            n50++;
            }
                else if (n>=20) {
                n= n-20;
                n20++;
                }
                    else if (n>=10) {
                        n= n-10;
                        n10++;
                    }
                            else if (n>=5) {
                                n= n-5;
                                n5++;
                            }
                                    else if (n>=2) {
                                        n= n-2;
                                        n2++;
                                    }
                                        else if (n>=1) {
                                            n= n-1;
                                            n1++;
                                        }
    }

    cout << n100 << " nota(s) de R$ 100,00" << endl;
    cout << n50 << " nota(s) de R$ 50,00" << endl;
    cout << n20 << " nota(s) de R$ 20,00" << endl;
    cout << n10 << " nota(s) de R$ 10,00" << endl;
    cout << n5 << " nota(s) de R$ 5,00" << endl;
    cout << n2 << " nota(s) de R$ 2,00" << endl;
    cout << n1 << " nota(s) de R$ 1,00" << endl;
                                            
                                            
 
    return 0;
}