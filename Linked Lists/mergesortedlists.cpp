class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int count = 0;
        
        for(vector<ListNode*> it : lists){
            if(it == NULL)count++;
        }

        if(count == lists.size()) return NULL;
        
        vector<int> v;

        for(vector<ListNode*> it : lists){
            while(it!=NULL){
                v.push_back(it->val);
                it = it->next;
            }
        }

        sort(v.begin(), v.end());
        
        ListNode* a = new ListNode(v[0]);
        ListNode * b = a;
        
        for(int i = 0; i < v.size() - 1; i++){
            b->next = new ListNode(v[i + 1]);
            b = b->next;
        }
        
        return a;
    }
};