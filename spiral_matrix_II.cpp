#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> new_matrix;
        new_matrix.resize(n);
        int number=1;
        int tour=0;
        int spiral = 0;
        
        vector<int> col;
        col.resize(n);

        new_matrix.assign(n,col);
        if(n>1)
        {
            if(n%2!=0)
            {
                spiral = ((n+1)/2)-1;
            }
            else
            {
                spiral = n/2;
            }
            while(tour < spiral)
            {
                for(int i = 0+tour; i<n-tour; i++)
                {
                    new_matrix[0+tour][i] = number;
                    number++;
                }

                for(int i = 1+tour; i<n-tour; i++)
                {
                    new_matrix[i][n-1-tour] = number;
                    number++;
                }

                for(int i = 1+tour; i<n-tour; i++)
                {
                    new_matrix[n-1-tour][n-i-1] = number;
                    number++;
                }

                for(int i = 1+tour; i<n-1-tour; i++)
                {
                    new_matrix[n-1-i][0+tour] = number;
                    number++;
                }
                tour++;
            }
            if(n%2!=0)
            {
                new_matrix[spiral][spiral] = number;
            }
            
        }
        else
        {
            new_matrix[0][0] = number;
        }
        
        return new_matrix;
    }
};