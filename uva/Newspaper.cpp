#include<bits/stdc++.h>

using namespace std;
/*
1
7
a 3
W 10
A 100
, 10
k 7
. 3
I 13
7
ACM International Collegiate Programming Contest (abbreviated
as ACM-ICPC or just ICPC) is an annual multi-tiered competition
among the universities of the world. The ICPC challenges students
to set ever higher standards of excellence for themselves
through competition that rewards team work, problem analysis,
and rapid software development.
From Wikipedia.
*/
int main() {
  int tc; cin>>tc;
  while(tc-->0) {
      unordered_map<char, int> prices;
      int np; cin >> np;
      while (np-->0)
      {
        char c; cin >>c;
        int p; cin >> p;
        prices.insert(pair<char,int>(c, p));
      }
      int nl; cin >> nl;
      int ans = 0;
      while(nl-->=0) {
        string s; getline(cin, s);
        for(char c:s) {
          if(prices.find(c)!=prices.end()) {
            ans += prices[c];
          }
        }
      }
      printf("%.2lf$\n", ans / 100.0);
  }
}
