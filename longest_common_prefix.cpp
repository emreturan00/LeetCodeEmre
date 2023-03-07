#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        string res_last="";
        int counter =0;

        for(int i = 0; i<strs.size(); i++)
        {
            if(strs[i].size() == 0) {return res_last;}
            for(char c:strs[i])
            {
                if(res.size()>strs[i].size())
                    {
                        int dif = (res.size()) - (strs[i].size());
                        cout<<dif;
                        for(int j = 0; j<dif; j++)
                        {
                            res[(strs[i].size())+j] = ' ';
                        }
                    }
                    
                if(c == res[counter])
                {
                    counter++;
                }
                else 
                {
                    res[counter] = ' ';
                    counter++;

                    
                }
            }
            counter =0;
        }
        int counter2=0;
        for(char c:res)
        {
            if(c != ' ' && counter2 == 0)
            {
                res_last += c;
            }
            else{counter2++;}
        }
        return res_last;
        
    }
};