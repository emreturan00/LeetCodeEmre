/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(n!)          

Space Complexity: O(n)          stack frames are allocated every time function recursed so n recursions = n stack frames

*/

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex, int counter, vector<int> prev) {
        vector<int> row;

        int sum = 0;

        if (counter == rowIndex)
        {
            return prev;
        }
        else
        {
            row.push_back(1);       //left edge 1 before the middle numbers
            if (counter > 0)
            {
                for (int j = 0; j < counter - 1; j++)
                {
                    //finding the sum which are current and previous indexes of previous row
                    sum = prev[j] + prev[j + 1];
                    //push the sum to the triangle
                    row.push_back(sum);
                }
                row.push_back(1);   //right edge 1 after the middle numbers
            }
            counter++;
            return getRow(rowIndex, counter, row);
        }
    }
};


int main()
{
    Solution emre;

    vector<int>arr;

    vector <int> res = emre.getRow(33, 0, arr);

    res.

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}



int sumBinary(int* a, int i, int n)
{
    if(n==1)
        return a[i];
    int left = sumBinary(a, i, n/2);
    int right = sumBinary(a, i+n/2, n/2);
    return left + right;
}