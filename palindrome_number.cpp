/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(n)           2x seperated while loops which are linearly connected with the input 
Space Complexity: O(1)          so, (n) + (n) = o(2n) = o(n)
*/

#include <iostream>
#include <vector>

using namespace std;

int emre;
int ahmet;

class Solution {
public:
    bool isPalindrome(int x) {
     unsigned int sum=0;
     unsigned int temp= x;  //backing up the input x
     int counter=0;         //setting digit counter to 0
     
     if(x<0)                //if the input x is negative return false immidiately
     {                  
         return false;
     }
     while(temp !=0)        //the code block will be iterated until we reach 0
     {
         int a = temp%10;   //take the smallest digit
         temp -= a;         //subtract the smallest digit
         temp = temp/10;    //divide the number with 10 so we can move on to the bigger digits
         counter++;         //increment the digit counter
     }
     temp = x;              //temp value is input again since it was 0 from the previous steps
     while(counter > 0)
     {
         sum *=10;          //at each iteration the sum will be multiplied by 10 to put them in correct digit
         int a = temp%10;
         temp -= a;
         temp = temp/10;
         
         sum += a;          //adding the digit to sum
         counter--;         //decrease the counter

     }
     if(sum == x)
     {
         return true;       //if the reversed version and the original version same, return true
     }
     return false;

    }
};