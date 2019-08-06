/*
 * @lc app=leetcode id=24 lang=c
 *
 * [24] Swap Nodes in Pairs
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* swapPairs(struct ListNode* head){
    if(head == NULL)
        return head;
    if(head->next == NULL)
        return head;
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* pre = dummy;
    while(pre->next && pre->next->next){
        struct ListNode* cur = pre->next;
        struct ListNode* post = pre->next->next;
        pre->next = post;
        cur->next = post->next; 
        post->next = cur;
        pre = pre->next->next;
    }
    return dummy->next;
}



