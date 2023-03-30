#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int counter = 0;
        int result=0;
        ListNode* traveler = head;
        while(traveler->next != NULL)
        {
            traveler = traveler->next;
            counter++;
        }
        traveler = head;
        for(int i=counter; i>=0; i--)
        {
            result += pow(2,i)*(traveler->val);
            cout<<result;
            if(i==0)
            {
                break;
            }
            traveler = traveler->next;
        }
        return result;
    }
};