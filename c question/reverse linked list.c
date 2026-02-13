#include <stdio.h>
#include <stdlib.h>

  
struct ListNode {
    int val;
    struct ListNode *next;
};
 
struct ListNode* reverseList(struct ListNode* head) {
  struct ListNode *prev = NULL;
  struct  ListNode *curr = head;
    struct ListNode * next = NULL;
   while(curr!= NULL){
    next = curr->next;
    curr -> next=prev;
    prev = curr;
    curr = next;
   }
   return prev;

     }
   
 struct ListNode* createNode(int val) {
    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}

// Function to print linked list
void printList(struct ListNode* head) {
    struct ListNode* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating a linked list 1->2->3->4->5
    struct ListNode* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original List:\n");
    printList(head);

    // Reverse the list
    head = reverseList(head);

    printf("Reversed List:\n");
    printList(head);

    return 0;
}