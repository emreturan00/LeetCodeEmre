/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(n*logn)          one for loop which is connected to the input, however the relationship is less than linear
                                    since it increments less than the input "num"
                                    so, O(n*logn)

Space Complexity: O(1)          no additional space consuming during runtime since the unsigned int already set.

*/

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)                      //if we catch the num==1 return true immidiately
        {
            return true;
        }
        for(unsigned int i=0; i<=num/2; i++)    //no need to iterate more than the half of the number 
        {                                       //since we are looking for the a square value
            if(i*i==num)
            {
                return true;                    //if we catch the square we can return to true
            }
        }
        return false;                   //if cant, then return to false, input is not square number
    }
};