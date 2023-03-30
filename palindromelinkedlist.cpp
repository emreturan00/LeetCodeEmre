/*
EMRE TURAN
ID: 20191709010

Time Complexity: O(n) -->> O(n) + O(1) + O(1) + O(n/2) = O(n)

Space Complexity: O(n) -->> more nodes mean more elements in the array      

*/

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> store;
        ListNode* traveler = head;
        //first, all the element will be pushed to the array
        while(traveler != NULL) {               //O(n) -> number of iterations depend on the node number
            store.push_back(traveler->val);     //O(1) & space complexity: O(n)
            traveler = traveler->next;          //O(1)
        }
        int i = 0;
        int j = store.size()-1;
        //all the elements of the array will be compared, one from beginning,
        // other from end, approaching each other.

        while(i < j)                    //iteration number will be O(n/2)                          
        {                               
            if(store[i] != store[j])
            {
                return false;
            }    
            i++;
            j--;
        }
    return true;
    }
};