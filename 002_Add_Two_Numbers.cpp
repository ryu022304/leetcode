struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyRoot = new ListNode(0);
        ListNode* res = dummyRoot;
        
        while(1){
            int tmp1 = l1->val;
            int tmp2 = l2->val;
            res->next = new ListNode(tmp1+tmp2);
            res = res->next;
            if(l1->next == nullptr){
                break;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        res = dummyRoot->next;
        delete dummyRoot;
        
        return res;
        
    };
};