/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };



 Initialize three pointers, prev, current, and next.
Set prev to None and current to the head of the linked list.
While current is not None, do the following:
a. Set next to current.next.
b. Set current.next to prev.
c. Set prev to current.
d. Set current to next.
Set the head of the linked list to prev.
Return the head of the reversed linked list.
 */

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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next;
        while (current != nullptr)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;

        }
        head = prev;
        return head;
    }
};