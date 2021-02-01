#include <bits/stdc++.h>

using namespace std;



int main() {
    int tc;
    cin >> tc;
    int ans = 0;
    while(tc-->0) {
        int n;
        cin >> n;
        bool found = false;
        for(int i = 0; i < n;i++) {
            int a; cin >>a;
            if(a % 2 == 0 && !found) {
                cout << 1 << endl << i + 1 << endl;
                found = true;
            }
        }
        if(found) continue;

        if(n > 1) {
            cout << 2 << endl;
            cout << 1 << " " << 2 << endl;
        } else {
            cout << -1 << endl;
        }
    }
}
