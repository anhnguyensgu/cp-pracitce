#include <bits/stdc++.h>

using namespace std;



int main() {
    int tc;
    cin >> tc;
    int ans = 0;
    while(tc-->0) {
        int n;
        vector<int> team;
        cin >> n;
        for(int i=0;i<n;i++) {
                int a;
            cin >> a;
            team.push_back(a);
        }
        sort(team.begin(), team.end());
        int ans = abs(team[0] - team[1]);

        for(int i = 2; i < n; i++) {
            ans = min(abs(team[i] - team[i - 1]), ans);
        }
        cout<<ans<<endl;
    }
}
