#include<bits/stdc++.h>

using namespace std;

int climbStairs(int n) {
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    if(n == 0) return 0;
    if(n==1) return 1;
    dp[2] = 2;
    for(int i = 3; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];
    return dp[n];    
}

int main() {
    freopen("input.txt", "r", stdin); 
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    int res = climbStairs(n); 
    cout << res  << endl;
}
