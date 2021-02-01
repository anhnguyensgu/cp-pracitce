
#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc-->0) {
        int n;

        cin >> n;
        vector<int> count(3, 0);
        for(int i=0; i<n;i++) {
            int w;
            cin >> w;
            count[w]++;
        }
        int total = count[1] + count[2] * 2;
        if(count[1] % 2 != 0) cout << "NO" << endl;
        else {
            if(count[1] != 0) cout << "YES" << endl;
            else {
                if(count[2] % 2 != 0)
                    cout << "NO" << endl;
                else cout << "YES" << endl;
            }
        }
    }
}
