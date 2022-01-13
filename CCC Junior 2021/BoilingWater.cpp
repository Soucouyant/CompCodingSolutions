#include <bits/stdc++.h>
using namespace std;

int main () {
    int B;
    int P;
    cin >> B;
    
    if (B >= 80 && B <= 200) {
        P = 5 * B - 400;
    }

    cout << P << endl;
   if (P > 100) {
       cout << "-1" << endl;
   } else if (P < 100) {
       cout << "1" << endl;
   } else if (P == 100) {
       cout << "0" << endl;
   }
}
