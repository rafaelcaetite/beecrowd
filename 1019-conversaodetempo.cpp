#include <iostream>

using namespace std;

int main ( ) {

    int s, ns=0, nh=0, nm=0;

    cin >> s;

    while (s>0) {
        if (s>=3600) {
            s = s - 3600;
            nh++;
        }
            else if (s>=60) {
                s = s - 60;
                nm++;
            }   
                else if (s>=1) {
                    s = s - 1;
                    ns++;
                }
    
    }

    cout << nh << ":" << nm << ":" << ns << endl;


    return 0;
}