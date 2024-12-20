#include <iostream>
#include <vector>
using namespace std; 

int singleNumber(vector <int> &nums){
    int ans = 0;
    for(int i : nums){
        ans ^= i;
    }
    return ans;
}
int main(){
    vector<int> vec = {4,2,1,2,1};
    cout << singleNumber(vec);
    return 0;
}