#
# @lc app=leetcode id=24 lang=python3
#
# [24] Swap Nodes in Pairs
#
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        if not head:
            return head
        if not head.next:
            return head
        lastNode = ListNode(0)
        lastNode.next = head
        cur = head
        head = head.next
    
        while cur and cur.next:
            lastNode.next = cur.next
            temp = cur.next.next
            cur.next.next = cur
            cur.next = temp
            lastNode = cur
            cur = temp
        return head
            