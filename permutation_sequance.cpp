#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        int fact=1;
        vector<int>numbers;
        for(int i=1;i<n;i++)
        {
            fact=fact*i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        string ans ="";
        k=k-1;
        while(true)
        {
            ans=ans+to_string(numbers[k/fact]);
            numbers.erase(numbers.begin()+k/fact);
            if(numbers.size()==0) break;
            k=k%fact;
            fact=fact/numbers.size();
        }
        return ans;
        
        
    }
};

//First find (n-1)!
//ex:
//1 2 3 4
// push all numbers in a vector in sorted order
// as total number of permutation formed is 4! , it is divided equally ,like first (n-1)! numbers starts with 1 , next (n-1)! starts with 2...and so on.
// now find the first number.
//     To find the first number , we divide k/fact it will give the index of the first number in the vector in which number is stored...add that number in the string and remove that number from the vector...now rest operation will take place on numbers left.
// update k to k % fact
// and fact to fact / size of vector , 
// now again loop will run and find the position of 2nd number in the vector add it to the string and again do the same opeartion
