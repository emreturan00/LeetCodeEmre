/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(n!)          

Space Complexity: O(n)          stack frames are allocated every time function recursed so n recursions = n stack frames

*/

#include <iostream>
#include <vector>

using namespace std;


void recurse_(vector<char>& s,int counter,int upper,int number) {
    
    if(counter == number)
    {
        cout<<"done";
    }
    else
    {
        swap(s[counter],s[upper-counter]);
        counter++;
        recurse_(s,counter,upper,number);
    }
}


class Solution {
public:
    void reverseString(vector<char>& s) {
        int counter=0;
        int upper = s.size()-1;
        int number=s.size()/2;
        recurse_(s,counter,upper,number);

    }
};