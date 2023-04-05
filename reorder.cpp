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
    void reorderList(ListNode* head) {
        vector<int> temp;
        ListNode* trav = head;
        
        while(trav != NULL)
        {
            temp.push_back(trav->val);
            trav = trav->next;
        }

        while(temp.size() != 0)
        {
            if(temp.size() == 1)
            {
                head->val = temp.front();
                head->next = NULL;
                temp.pop_back();  
                break;  
            }
            head->val = temp.front();
            head = head->next;
            head->val = temp.back();
            head = head->next;

            temp.pop_back();
            temp.erase(temp.begin());
        }
        
    }
};