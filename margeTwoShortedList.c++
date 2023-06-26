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
    // ListNode* createNode(int v, ListNode* next) {
    //     ListNode * new_node = new ListNode(v);
    //     if(new_node == nullptr) exit(1);
    //     new_node -> next = next;
    //     return new_node;
    // }
    
    // ListNode * prepend(ListNode* head, int v){
    //     return createNode(v, head);
    // }

    ListNode * append(ListNode * lastPtr, int v){
        ListNode * new_node = new ListNode;
        new_node ->val = v;
        new_node -> next = nullptr;
        lastPtr -> next = new_node;
        return new_node;
    }

public:
    //ListNode* 
    void mergeTwoLists(/*ListNode* list1, ListNode* list2*/) {
        ListNode * head1 = new ListNode();
        ListNode * lastPtr = head1;
        for (int i = 0; i <= 100; ++i) {
            lastPtr = append(lastPtr, i);
        }
        ListNode * head2 = new ListNode();
        lastPtr = head2;
        for (int i = 0; i <= 100; ++i) {
            lastPtr = append(lastPtr, i);
        }
        
        ListNode * mergeHead = new ListNode;
        lastPtr = mergeHead;
        ListNode * tem1 = head1;
        ListNode * tem2 = head2;
        while(tem1-> next != nullptr && tem2 -> next != nullptr){
            if(tem1-> val <= tem2->val){
                lastPtr = append(lastPtr, tem1-> val);
                tem1 = tem1-> next;
            }else{
                lastPtr = append(lastPtr, tem2 -> val);
                tem2 = tem2 -> next;
            }
        }
        ListNode * tem = mergeHead;
        while(tem-> next != nullptr){
            cout << tem -> val << endl;
            tem = tem -> next;
        }
    }
};

int main(){
    Solution obj;
    obj.mergeTwoLists();
}