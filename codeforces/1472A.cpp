#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while(tc-->0) {
        int w,h,n;
        cin >> w >> h >> n;
        int count = 1;
        while(w % 2 == 0) {
            count *=2;
            w /= 2;
        }

        while(h % 2 == 0) {
            count*=2;
            h /= 2;
        }

        if(count >= n) cout << "YES" <<endl;
        else cout << "NO" <<endl;
    }
}
