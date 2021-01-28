#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums{1,2,3};
    for(int i = 0; i < (1 << nums.size());i++) {
        for(int j = 0; j < nums.size(); j++) {
            if(i & (1 << j)) {
                cout << nums[j];
            }
        }
        cout << endl;
    }
}
