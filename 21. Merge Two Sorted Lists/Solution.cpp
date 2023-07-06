/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = NULL;
        if (list1 == NULL)
            return list2;
        if (list2 == NULL)
            return list1;

        if(list1 -> val <= list2 -> val)
            head = list1;
        else
            return mergeTwoLists(list2, list1);

        ListNode* curr = head;
        ListNode* check = list2;
        ListNode* temp = NULL;
        while(curr->next != NULL && check != NULL){
            if(curr -> next -> val > check -> val){
                temp = curr -> next;
                curr -> next = check;
                check = temp;
            }
            curr = curr -> next;
        }

        if (curr->next == NULL)
            curr->next = check;

        return head;
    }
};
