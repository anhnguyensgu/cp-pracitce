#include <bits/stdc++.h>

using namespace std;
int nonDivisibleSubset(int k, vector<int> s) {
    vector<int> modulo[k];
    for(int n: s) {
        modulo[n%k].push_back(n);
    }

    //int sum = s.size() - modulo[0].size();
    int ans = 0;
    int i =0;
    cout <<"debug"<<endl;
    for(vector<int> v : modulo) {
        cout << "mode " <<i++<< endl;
        for(int m: v) {
            cout << m << " ";
        }
        cout << endl;
    }
    cout <<"debug"<<endl;


    i =1;
    int j = k -1;
    int sum =0;
    while(i < j) {
        cout << modulo[i].size() <<" "<< modulo[j].size()<<endl;
        cout <<  max(modulo[i].size(), modulo[j].size())<<endl;

        sum += max(modulo[i].size(), modulo[j].size());
        i++;
        j--;
    }
    if(i == j) sum+=!modulo[i].empty();
    return sum + !modulo[0].empty();

}

int subsetPairNotDivisibleByK(int arr[], int N,
                                         int K)
{
    // Array for storing frequency of modulo
    // values
    int f[K];
    memset(f, 0, sizeof(f));

    // Fill frequency array with values modulo K
    for (int i = 0; i < N; i++)
        f[arr[i] % K]++;

    //  if K is even, then update f[K/2]
    if (K % 2 == 0)
        f[K/2] = min(f[K/2], 1);

    // Initialize result by minimum of 1 or
    // count of numbers giving remainder 0
    int res = min(f[0], 1);

    // Choose maximum of count of numbers
    // giving remainder i or K-i
    for (int i = 1; i <= K/2; i++)
        res += max(f[i], f[K-i]);

    return res;
}

int main() {
    vector<int> nums({1, 2, 3,4, 5, 6, 7, 8, 9, 10});
    cout<<nonDivisibleSubset(4, nums)<<endl;
    int a[10]{1, 2, 3,4, 5, 6, 7, 8, 9, 10};
    cout<<subsetPairNotDivisibleByK(a, 10, 4)<<endl;
}
