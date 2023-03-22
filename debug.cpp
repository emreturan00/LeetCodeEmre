#include <iostream>
using namespace std;

// Binary recursion to find the sum of elements in an array
int sumBinary(int* arr, int i, int n) {
    if (i == n) 
    {
        return arr[i];
    } 
    else
    {
        int mid = (i + n) / 2;
        int left = sumBinary(arr, i, mid);
        int right = sumBinary(arr, mid + 1, n);
        return left + right;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    int sum = sumBinary(arr, 0, n - 1);
    cout << "Sum of array elements: " << sum <<endl;
    return 0;

}
