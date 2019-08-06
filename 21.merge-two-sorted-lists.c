/*
 * @lc app=leetcode id=21 lang=c
 *
 * [21] Merge Two Sorted Lists
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if(l1 == NULL)
        return l2;
    else if(l2 == NULL)
        return l1;
    struct ListNode* dummy = malloc(sizeof(struct ListNode));
    if(l1->val < l2->val){
        dummy->next = l1;
        l1 = l1->next;
    }else{
        dummy->next = l2;
        l2 = l2->next;
    }
    struct ListNode* cur = dummy->next;
    while(l1 || l2){
        if(l1 == NULL){
            cur->next = l2;
            break;
        }else if(l2 == NULL){
            cur->next = l1;
            break;
        }
        if(l1->val < l2->val){
            cur->next = l1;
            l1 = l1->next;
        }else{
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    return dummy->next;
}



