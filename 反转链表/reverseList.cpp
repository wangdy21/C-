#include<iostream>

using namespace std;

//创建一个链表
struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL){};
};

//反转一个链表
//三个指针，分别是当前节点cur,前一个节点pre,后一个节点next
//每次将当前节点的指针指向前一个节点，然后pre和cur往后移一个节点
ListNode* reverseList(ListNode* head){
    ListNode* pre = NULL;
    ListNode* curr = head;
    while(curr!=NULL){
        ListNode* next = curr->next;
        curr->next = pre;
        pre = curr;
        curr = next;
    }
    return pre;
}


//打印链表
void PrintList(ListNode* head){
    while(head!=NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
} 


int main(){
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    PrintList(head);
    ListNode* reversehead = reverseList(head);
    PrintList(reversehead);
    return 0;
}