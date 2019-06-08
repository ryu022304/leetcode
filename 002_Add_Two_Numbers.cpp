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
        bool f = false;
        bool f1 = false;
        bool f2 = false;
        
        while(1){
            int tmp1 = 0;
            int tmp2 = 0;
            
            // l1がNULLじゃなかったら値を入れる
            if(!f1){
                tmp1 = l1->val;
                l1 = l1->next;
            }
            // l2がNULLじゃなかったら値を入れる
            if(!f2){
                tmp2 = l2->val;
                l2 = l2->next;
            }
            
            int tmp = tmp1 + tmp2;
            if(f){
                tmp = tmp + 1;
            }
            res->next = new ListNode(tmp%10);
            res = res->next;
            
            if(l1==nullptr){
                f1 = true;
            }
            if(l2==nullptr){
                f2 = true;
            }
            
            // 計算結果が10以上なら次の桁は+1
            if(tmp >= 10){
                f = true;
            }
            else{
                f = false;
            }
            // l1とl2の全桁を確認して、桁上がりがないなら終了
            if((l1 == nullptr) && (l2 == nullptr) && !f){
                break;
            }

        }
        res = dummyRoot->next;
        delete dummyRoot;
        
        return res;
        
    };
};