#
# @lc app=leetcode id=23 lang=python3
#
# [23] Merge k Sorted Lists
#
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def mergeTwoLists(self, l1, l2):
        head = ListNode(0)
        dummy = head
        while l1 and l2:
            if l1.val < l2.val:
                dummy.next = l1
                l1 = l1.next
            else:
                dummy.next = l2
                l2 = l2.next
            dummy = dummy.next
        if l1 == None:
            dummy.next = l2
        else:
            dummy.next = l1
        return head.next
    def mergeKLists(self, lists: List[ListNode]) -> ListNode:
        nums = len(lists)
        if len(lists) == 0:
            return None
        interval = 1
        while interval < nums:
            for i in range(0, nums - interval, interval * 2):
                lists[i] = self.mergeTwoLists(lists[i], lists[i + interval])
            interval *= 2
        return lists[0]

