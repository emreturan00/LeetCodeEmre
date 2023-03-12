#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> temp;

        if (m < n)
        {
            for (int i = 0; i < (n - (m - 1)); i++)
            {
                for (int j = 0; j < m; j++)
                {
                    temp.push_back(mat[j][j + i]);
                }
                for (int j = 0; j < temp.size() - 1; j++)
                {
                    for (int k = j + 1; k < temp.size(); k++)
                    {
                        if (temp[j] > temp[k])
                        {
                            swap(temp[j], temp[k]);
                        }
                    }
                }
                for (int j = 0; j < m; j++)
                {
                    mat[j][j + i] = temp[j];
                }
                temp.clear();
            }




            for (int i = 0; i < (m - 1); i++)
            {
                for (int j = 0; j < (i + 1); j++)
                {
                    temp.push_back(mat[(m - 1) - i + j][j]);
                }

                for (int j = 0; j < temp.size() - 1; j++)
                {
                    for (int k = j + 1; k < temp.size(); k++)
                    {
                        if (temp[j] > temp[k])
                        {
                            swap(temp[j], temp[k]);
                        }
                    }
                }

                for (int j = 0; j < i + 1; j++)
                {
                    mat[(m - 1) - i + j][j] = temp[j];

                }

                temp.clear();
            }
            for (int i = 0; i < (m - 1); i++)
            {
                for (int j = 0; j < (i + 1); j++)
                {
                    temp.push_back(mat[j][(n - 1) - i + j]);
                }
                for (int j = 0; j < temp.size() - 1; j++)
                {
                    for (int k = j + 1; k < temp.size(); k++)
                    {
                        if (temp[j] > temp[k])
                        {
                            swap(temp[j], temp[k]);
                        }
                    }
                }
                for (int j = 0; j < i + 1; j++)
                {
                    mat[j][(n - 1) - i + j] = temp[j];
                }
                temp.clear();
            }
            return mat;
        }
        else
        {
            for (int i = 0; i < (m - (n - 1)); i++)
            {
                for (int j = 0; j < n; j++)
                {
                    temp.push_back(mat[j+i][j]);
                }
                for (int j = 0; j < temp.size() - 1; j++)
                {
                    for (int k = j + 1; k < temp.size(); k++)
                    {
                        if (temp[j] > temp[k])
                        {
                            swap(temp[j], temp[k]);
                        }
                    }
                }
                for (int j = 0; j < n; j++)
                {
                    mat[j+i][j] = temp[j];
                }
                temp.clear();
            }
       
            for (int i = 0; i < (n - 1); i++)
            {
                for (int j = 0; j < (i + 1); j++)
                {
                    temp.push_back(mat[(m - 1) - i + j][j]);
                }

                for (int j = 0; j < temp.size() - 1; j++)
                {
                    for (int k = j + 1; k < temp.size(); k++)
                    {
                        if (temp[j] > temp[k])
                        {
                            swap(temp[j], temp[k]);
                        }
                    }
                }

                for (int j = 0; j < i+1; j++)
                {
                    mat[(m - 1) - i + j][j] = temp[j];

                }

                temp.clear();
            }

            for (int i = 0; i < (n - 1); i++)
            {
                for (int j = 0; j < (i + 1); j++)
                {
                    temp.push_back(mat[j][(n-1)-i+j]);
                }

                for (int j = 0; j < temp.size() - 1; j++)
                {
                    for (int k = j + 1; k < temp.size(); k++)
                    {
                        if (temp[j] > temp[k])
                        {
                            swap(temp[j], temp[k]);
                        }
                    }
                }
                for (int j = 0; j < i+1; j++)
                {
                    mat[j][(n - 1) - i + j] = temp[j];
                }
                temp.clear();
            }

            return mat;
        }
    }
};














/*!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*/






int main()
{
    vector<int> arr1 = { 11, 25, 66, 1, 69, 7 };
    vector<int> arr2 = { 23, 55, 17, 45, 15, 52 };
    vector<int> arr3 = { 22, 27, 33, 25, 68, 4 };
    vector<int> arr4 = { 11, 25, 66, 1, 69, 7 };
    vector<int> arr5 = { 84, 28, 14, 11, 5, 50 };
    vector<int> arr6 = { 84, 28, 14, 11, 5, 50 };
    vector<int> arr7 = { 84, 28, 14, 11, 5, 50 };



    Solution emre;

    vector<vector<int>> mat;

    mat.push_back(arr1);
    mat.push_back(arr2);
    mat.push_back(arr3);
    mat.push_back(arr4);
    mat.push_back(arr5);
    mat.push_back(arr6);
    mat.push_back(arr7);

    emre.diagonalSort(mat);

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << mat[i][j]<<" ";
        }
        cout << "\n";
    }

}