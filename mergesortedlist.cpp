/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       
        vector<int> arr;
        ListNode *ptr1 = list1;
        while(ptr1 != nullptr){
            arr.push_back(ptr1->val);
            ptr1 = ptr1->next;
        }

        ListNode *ptr2 = list2;
        while(ptr2 != nullptr){
            arr.push_back(ptr2->val);
            ptr2 = ptr2->next;
        }

       
        sort(arr.begin(), arr.end());
        
       
        if (arr.empty()) {
            return nullptr;
        }

       
        ListNode* dummyHead = new ListNode(); 
        ListNode* tail = dummyHead; 
        
        for (int val : arr) {
            tail->next = new ListNode(val); 
            tail = tail->next;              
        }

        
        return dummyHead->next; 
        // --- FIX ENDS HERE ---
    }
};
