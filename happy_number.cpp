/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(n*logn)          2x nested while loops but outer one is not connected with the input.
                                    inner one is related to input however it is not linear since it increments
                                    one while the outer one needs 10 incrementation.
                                    so, O(n*logn)

Space Complexity: O(1)          no additional space consuming during runtime since the unsigned ints were already set.

*/
#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    bool isHappy(int n) {
        int temp = n;           //backing up the input n
        unsigned int sum=0;
        bool stop = false;      //setting the stopper to make sure the below while loop is iterated more than once
        while(!stop)
        {
            while(temp != 0)    //it will iterate until the temp value is equal to 0
            {
                int remainder = temp % 10;  //taking the smallest digit
                sum += (remainder*remainder);   //square of smallest digit is added to sum
                temp -= remainder;              //subtract the smallest digit so we can divide it to 10 without any problem
                temp = temp /10;                //divide to 10 and continue with the following digit with same procedure
            }
            temp = sum;             //put the sum to temp value so we dont repeat the same procedure with the inital input value
            if(sum == 1)
            {
                return true;
            }
            if(sum == 4)
            {
                stop = true;        //if sum equal to 4 then we can stop since the number 4 goes back to itself after the procedure
            }
            sum = 0;                //sum is 0 after all steps so we are not using the previous number results anymore
        }
        return false;        
    }
};
