/*
 * @lc app=leetcode id=2 lang=c
 *
 * [2] Add Two Numbers
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* result = malloc(sizeof(struct ListNode));
    int carry = 0;
    int sum = 0;
    struct ListNode* temp = result;
    while(l1 || l2){
        sum = carry + (l1? l1->val:0) + (l2? l2->val:0);
        carry = sum / 10;
        temp -> val = sum % 10;
        l1 = l1? l1->next: NULL;
        l2 = l2? l2->next: NULL;
        if(l1 || l2){
            temp->next = malloc(sizeof(struct ListNode));
            temp = temp -> next;
        }
        else if(carry){
            temp->next = malloc(sizeof(struct ListNode));
            temp = temp->next;
            temp->val = carry;
        }
    }
    temp->next = NULL;
    return result;
}



