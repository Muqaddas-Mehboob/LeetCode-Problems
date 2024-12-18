#include <iostream>
using namespace std;

bool isPowerOfTwo(int num){
    if (num == 0){
         return false;
    }
    while(num != 1){
        if(num % 2 != 0){
            return false;
        }
        num = num/2;
    }
    return true;
}

int main(){
    cout << isPowerOfTwo(2) << endl;
    cout << isPowerOfTwo(0) << endl;
    cout << isPowerOfTwo(34) << endl;
    cout << isPowerOfTwo(16) << endl;
    return 0;
}