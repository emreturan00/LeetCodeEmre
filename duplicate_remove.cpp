#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> temp;
        string res = "";
        temp.push('1');


        for(char c:s)
        {
            if(temp.top() != c)
            {
                temp.push(c);
            }
            else{
                temp.pop();
            }
        }
        
        while(temp.size() != 1)
        {
            res += temp.top();
            temp.pop();
        }

        for(int i=0; i<res.length()/2; i++)
        {
            swap(res[i],res[res.length()-1-i]);
        }
        return res;

    }
};