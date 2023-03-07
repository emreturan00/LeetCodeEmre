/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(n*logn)          one while loop which is connected to the input, however the relationship is less than linear
                                    since it increments less than the input "num"
                                    so, O(n*logn)

Space Complexity: O(1)          no additional space consuming during runtime since the  ints were already set.

*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int counter=0;
        int number=num;
        while(number>0)         //we will iterate until reach 0
        {
            if(number%2==1)     //if it is an odd number,
            {
                number--;       //decreament the number value
                counter++;      //increment the counter value
            }
            else
            {   
                number = (number/2);    //even number, we will divide to 2
                counter++;              //increment the counter value
            }
        }
        return counter;             //after the while loop completed, we can return the counter
    }
};