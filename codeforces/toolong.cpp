#include <bits/stdc++.h>

using namespace std;



int main() {
    int tc;
    cin >> tc;
    while(tc-->0) {
        string w;
        cin >> w;
        if(w.length() <= 10) cout << w << endl;
        else {
            cout << w[0] << w.length() - 2 << w[w.length() - 1] << endl;
        }

    }
}
