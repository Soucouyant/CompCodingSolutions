#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int highestBid = 0;
    string winner;

    for(int i = 0; i < n; i++) {
        string name;
        cin >> name;
        int bid;
        cin >> bid;
        if (bid > highestBid) {
            highestBid = bid;
            winner = name;
            }
        }
    cout << winner << endl;
}
