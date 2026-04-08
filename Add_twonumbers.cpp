
 struct ListNode 
 {
      int val;
     ListNode *next;
    ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* solution=add(l1, l2,0);
        return solution;
    }
    ListNode* add(ListNode* l1,ListNode* l2,int carry)
    {
        int u,l,nv;ListNode* temp=NULL;
        if(l1==NULL && l2==NULL)
        {
            if(carry!=0){
            ListNode* sol=new ListNode(carry,NULL);
            return sol;}
            else return NULL;
        }
        else if(l1==NULL)
        {
            u=0;l=l2->val;nv=u+l+carry;
            temp=add(l1,l2->next,nv/10);
        }
        else if(l2==NULL)
        {
            u=l1->val;l=0;nv=u+l+carry;
            temp=add(l1->next,l2,nv/10);
        }
        else{
        u=l1->val;
        l=l2->val;
        nv=u+l+carry;
        temp=add(l1->next,l2->next,nv/10);
        }
        ListNode* sol=new ListNode(nv%10,temp);
        return sol;
        
    }
};
