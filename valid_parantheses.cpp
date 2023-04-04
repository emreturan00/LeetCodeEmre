#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    bool isValid(string s) {
        

        vector<char> temp;

        temp.push_back('e');

        for(int i=0; i<s.length(); i++)
        {    
            if(temp.back() == '(')
            {
                if( s[i] != ')')
                {
                    temp.push_back(s[i]);
                }
                else{
                    temp.pop_back();
                }
            }
            else if(temp.back() == '[')
            {
                if( s[i] != ']')
                {
                    temp.push_back(s[i]);
                }
                else{
                    temp.pop_back();
                }
            }
            else if(temp.back() == '{')
            {
                if( s[i] != '}')
                {
                    temp.push_back(s[i]);
                }
                else{
                    temp.pop_back();
                }
            }
            else{
                temp.push_back(s[i]);
            }
        }
        if(temp.size() > 1)
        {
            return false;
        }
        return true;
    }
};