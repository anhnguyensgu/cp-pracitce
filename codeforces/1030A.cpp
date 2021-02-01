
#include <bits/stdc++.h>

using namespace std;



int main() {
    int n;
    cin >> n;
    bool isHard = false;
    for(int i=0;i<n;i++) {
        int a; cin >> a;
        if(a == 1) isHard = true;
    }

    if(isHard) cout << "HARD";
    else cout << "EASY";
}
