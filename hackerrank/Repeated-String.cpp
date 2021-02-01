#include <bits/stdc++.h>

using namespace std;

long repeatedString(string s, long n) {
    int l = s.size();
    long steps = n/l;
    long remain = n%l;
    long count = 0;

    for(char a:s) {
        if(a == 'a') count++;
    }
    count = count * steps;
    for(int i=0; i<remain;i++) {
        if(s[i]=='a')count++;
    }

    cout << count << endl;
    return count;
}

int main() {
    repeatedString("ababba", 8);
}
