#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int rev = x;
        int ans = 0;
        while(rev > 0){
            int rem = rev % 10;
            if(ans > INT_MAX/10 || ans < INT_MIN/10){
                break;
            }
            ans = (ans * 10) + rem;
            rev /= 10;
        }
        return (ans == x);
    }
};
int main(){
    Solution num1, num2, num3;
    cout << num1.isPalindrome(121) << endl;
    cout << num2.isPalindrome(-121) << endl;
    cout << num3.isPalindrome(10) << endl;
    return 0;
}