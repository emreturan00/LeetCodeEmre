
#include <iostream>
#include <vector>

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
    ListNode* middleNode(ListNode* head) {
        int counter=1;
        ListNode* traveler = head;
        while(traveler->next != nullptr)
        {
            counter++;
            traveler = traveler->next;
        }
        int bound = counter/2;
        traveler = head;
        for(int i=0; i<bound; i++)
        {
            traveler = traveler->next;
        }
        return traveler;
    }
};