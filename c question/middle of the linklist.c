
//   Definition for singly-linked list.
  struct ListNode {
      int val;
    struct ListNode *next;
  };
 
struct ListNode* middleNode(struct ListNode* head) {
     struct ListNode* slow = head;
     struct ListNode* fast = head;
     while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
     }
     return slow;
}
int main(){
    int a[] ={1,2,3,4,5,,6};
    struct ListNode* head = NULL;
    struct ListNode* temp = NULL;
}