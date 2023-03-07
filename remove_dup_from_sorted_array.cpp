/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(n)               for loop is not connected with the input, it iterates every single element 
                                    of the array, so it is O(n)

Space Complexity: O(1)              no memory allocation during runtime.

*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp=nums[0];

        for(auto i = nums.begin() +1; i != nums.end(); i++)
        {   
            
            if(*i == temp)
            {
                nums.erase(i);
                i--;
            }
            else
            {
                temp = *i;
            }
        }
        
        int res = nums.size();
        return res;
    }
};