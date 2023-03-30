
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
        {
            return NULL;
        }
        ListNode* trav = head;
        while (trav->next != NULL)
        {
            if (trav->val == trav->next->val)
            {
                ListNode* be_deleted = trav->next;
                if(trav->next->next != NULL)
                {
                    trav->next = trav->next->next;
                }
                else{
                    trav->next = NULL;
                    delete be_deleted;
                    return head;        
                }
                delete be_deleted;
            }
            else{
                trav = trav->next;
            }
        }
        return head;
    }
};