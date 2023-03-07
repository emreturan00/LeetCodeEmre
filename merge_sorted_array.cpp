#include <iostream>
#include <vector>

using namespace std;



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0; i < n; i++)
        {
            nums1[m+i] += nums2[i];
        }


        for(int i = 0 ; i<nums1.size(); i++)
        {
            
            for(int j = i+1; j<nums1.size(); j++)
            {

                if(nums1[i] > nums1[j])
                {
                    swap(nums1[i],nums1[j]);
                }
            }
        }
    }
};