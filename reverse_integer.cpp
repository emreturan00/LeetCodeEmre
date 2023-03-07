#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int reverse(int x) {
        int temp = x;
        int sum=0;
        cout<<INT_MAX /10;
        while(temp!=0)
        {
            if((INT_MAX / 10 >= sum) && (INT_MIN / 10 <= sum))
            {
                sum *= 10;
                int a = temp % 10;
                temp -= a;
                sum += a;

                temp = temp /10;
            }
            else
            {
                return false;
            }
        }
        return sum;
    }
};