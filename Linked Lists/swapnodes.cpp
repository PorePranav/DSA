class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;

        if(head != NULL && head->next != NULL){
            swap(head->val,head->next->val);
            swapPairs(head->next->next);
        }

        return head;
    }
};