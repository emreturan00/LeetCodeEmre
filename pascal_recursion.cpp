/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(n*logn)          one while loop which is connected to the input, however the relationship is less than linear
                                    since it increments less than the input "num"
                                    so, O(n*logn)

Space Complexity: O(1)          no additional space consuming during runtime since the  ints were already set.

*/

#include <iostream>
#include <vector>

using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex,vector<int> prev) {
        vector<int> row;
        
        int sum = 0;
        int counter =0;

        if(counter == rowIndex)
        {
            return row;
        }
        else{
            prev_row() 
            row.push_back(1);       //left edge 1 before the middle numbers
            if (counter > 0)
            {
                for (int j = 0; j < counter - 1; j++)
                {
                        //finding the sum which are current and previous indexes of previous row
                    sum = prev_row[j] + prev_row[j+1];    
                                                //push the sum to the triangle
                    row.push_back(sum);
                }
                row.push_back(1);   //right edge 1 after the middle numbers
            }
            counter++;
            return getRow(counter);
            }
    }   
        }
           
    
};