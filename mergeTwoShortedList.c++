#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode * append(ListNode * lastPtr, int v){
        ListNode * new_node = new ListNode;
        new_node ->val = v;
        new_node -> next = nullptr;
        lastPtr -> next = new_node;
        return new_node;
    }
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode * mergeHead;
        ListNode * lastPtr = mergeHead;
        while(list1 != nullptr && list2 != nullptr){
            if(list1 -> val <= list2 -> val){
                lastPtr = append(lastPtr, list1 -> val);
                list1  = list1 -> next;
            }else{
                lastPtr = append(lastPtr, list2 -> val);
                list2 = list2 -> next;
            }
        }
        while(list1 != nullptr){
            lastPtr = append(lastPtr, list1 -> val);
            list1 = list1 -> next;
        }

        while(list2 != nullptr){
            lastPtr = append(lastPtr, list2 -> val);
            list2 = list2 -> next;
        }
        mergeHead = mergeHead -> next;
        return mergeHead;
    }
};

int main(){}