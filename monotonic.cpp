

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int temp;
        bool inc = false;
        bool dec = false;
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(nums[i] != nums[i+1])
            {
                if(nums[i] < nums[i+1])
                {
                    inc = true;
                    temp = INT_MIN;

                }
                else{
                    dec = true;
                    temp = INT_MAX;

                }
            }
        }
        cout<<inc;
        for(int i = 0; i<nums.size(); i++)
        {
            if(inc)
            {
                if(nums[i] < temp)
                {
                    return false;
                }
                temp = nums[i];
            }
            else
            {
                if(nums[i] > temp)
                {
                    return false;
                }
                temp = nums[i];
            }
        }
        return true;
    }
};