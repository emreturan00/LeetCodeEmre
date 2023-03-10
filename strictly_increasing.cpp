#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int temp = 0;
        bool false_counter=true;
        for(int i = 0; i<nums.size(); i++)
        {
            temp = nums[i];
            nums.erase(nums.begin()+i);

            false_counter = true;
            for(int j=0; j<nums.size()-1; j++)
            {
                if(nums[j] >= nums[j+1])
                {
                    false_counter = false;
                }
            }
            if(false_counter)
            {
                return false_counter;
            }
            nums.insert(nums.begin()+i,temp);
        }
        return false_counter;
    }
};