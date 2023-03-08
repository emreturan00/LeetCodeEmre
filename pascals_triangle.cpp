/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(n*logn)          one for loop which is connected to the input, however the relationship is less than linear
                                    since it increments less than the input "num"
                                    so, O(n*logn)

Space Complexity: O(1)          no additional space consuming during runtime since the unsigned int already set.

*/

#include <iostream>
#include <vector>

using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> triangle;
        vector<int> row;
        int sum = 0;

        triangle.assign(numRows, row);

        for (int i = 0; i < numRows; i++)
        {
            triangle[i].push_back(1);
            if (i > 0)
            {
                for (int j = 0; j < i - 1; j++)
                {
                    sum = triangle[i - 1][j] + triangle[i - 1][j+1];
                    triangle[i].push_back(sum);
                }
                triangle[i].push_back(1);
            }
        }
        return triangle;
    }
};
