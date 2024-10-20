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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int data=0;
        int carry=0;

        ListNode*prev=NULL;
        ListNode*curr=NULL;
        ListNode*head=NULL;

        while(l1!=NULL || l2!=NULL || carry!=0)
        {
            
            data=carry;
            if(l1!=NULL)
            {
                data+=l1->val;
                l1=l1->next;
            }

            if(l2!=NULL)
            {
                data+=l2->val;
                l2=l2->next;
            }
            carry=data/10;
            data=data%10;

            curr=new ListNode(data);
            if(prev==NULL)
            {
                head=curr;
            }
            else
            {
                prev->next=curr;
            }
            prev=curr;
        }
        return head;
    }
};