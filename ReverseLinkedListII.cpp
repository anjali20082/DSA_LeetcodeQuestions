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
    
    ListNode * reverse(ListNode* head){
        ListNode * pre =NULL, *nxt = NULL,  *curr = head;
        
        while(curr != NULL){
            
            nxt = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nxt;
        }
        return pre;
        
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode * curr = head, *rev_pre = NULL, *revendnxt = NULL, *revs = NULL, *revend = NULL;
        int count =0;
        
        while(curr != NULL && count <= right){
            count++;
            
            if(count < left)
                rev_pre = curr;
            if (count == left )
                revs = curr;
            if(count == right )
            {  revend = curr;
        
            revendnxt = curr->next;}
            
            curr = curr->next;
                
            
        }
        
        revend->next = NULL;
        
        revend = reverse(revs);
        
        if(rev_pre)
            rev_pre->next = revend;
        else
            head = revend;
        
        revs->next = revendnxt;
        
        return head;
        
    }
};