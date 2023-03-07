#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int temp=0;
        int prev=0;
        int res=0;
        for(int i=s.size(); i>=0; i--)
        {
            if(s[i] == 'I') {temp = 1;}
            if(s[i] == 'V') {temp = 5;}
            if(s[i] == 'X') {temp = 10;}
            if(s[i] == 'L') {temp = 50;}
            if(s[i] == 'C') {temp = 100;}
            if(s[i] == 'D') {temp = 500;}
            if(s[i] == 'M') {temp = 1000;}

            if(temp >= prev) {res += temp;}
            else{res-=temp;}
            prev = temp;
        }
        return res;
    }
};