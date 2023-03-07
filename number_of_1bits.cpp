/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(1)               for loop is not connected with the input, it is always iterating for 32 times
                                    so, O(1)

Space Complexity: O(1)          no additional space consuming during runtime since the counter int already set.

*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int counter=0;                  //setting up the counter
        for(int i = 0; i<32; i++)       //the input is always 32 bit, iterate for 32 times
        {
            if((n&1) == 1)              //we can take the smallest digit by using and logic gate by comparing it with 1 
            {
                counter++;              //increment the counter
            }
            n>>=1;                      //shift the input to right so we can continue with the following digits
            
        }
        return counter;
    }
};