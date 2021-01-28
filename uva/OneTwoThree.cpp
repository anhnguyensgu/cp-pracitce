#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc-- > 0)
  {
    string one = "one";
    string two = "two";
    string three="three";
    string s;
    cin >> s;
    if(s.size() == 3) {
      int c = 0;
      for (int i = 0; i < 3; i++)
      {
        if(s[i]==one[i]) c++;
      }
      if(c >= 2) cout << 1 << endl;
      else {
        c = 0;
        for (int i = 0; i < 3; i++)
        {
          if(s[i]==two[i]) c++;
        }
        if(c >=2) cout << 2 << endl;
      }

    } else {
      cout << 3 << endl;
    }
  }
}