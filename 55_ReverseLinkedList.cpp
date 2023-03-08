// Reverse a linked list
// EasyAccuracy: 73.11%Submissions: 230K+Points: 2
// Participate in Monthly Hiring Challenge conducted by GeeksforGeeks !!  

// Given a linked list of N nodes. The task is to reverse this list.

// Example 1:

// Input:
// LinkedList: 1->2->3->4->5->6
// Output: 6 5 4 3 2 1
// Explanation: After reversing the list, 
// elements are 6->5->4->3->2->1.
// Example 2:

// Input:
// LinkedList: 2->7->8->9->10
// Output: 10 9 8 7 2
// Explanation: After reversing the list,
// elements are 10->9->8->7->2.
// Your Task:
// The task is to complete the function reverseList() with head reference as the only argument and should return new head after reversing the list.

// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(1).

// Constraints:
// 1 <= N <= 104


// class Solution
// {
//     public:
//     //Function to reverse a linked list.
//     struct Node* reverseList(struct Node *head)
//     {
//         // code here
//         // return head of reversed list

//     if(head == NULL || head->next == NULL){
//         return head;
//     }
        
//     Node* forward = NULL;
//     Node* curr = head;
//     Node* prev = NULL;


//     while(curr){
//         forward = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = forward;
//     }

//     head = prev;
//     return head;
//     }


#include<iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};



void insertAtHead(ListNode* &head,int d){
    ListNode* temp = new ListNode(d);
    temp->next = head;
    head = temp;
}

void printNode(ListNode* &head){
    ListNode* temp = head;

    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

    ListNode* reverse1(ListNode* &head){
        if(head == NULL || head->next == NULL){
            return head;
        }    
        
        ListNode* head2 = reverse1(head->next);
        head->next->next = head;
        head->next =NULL;
        
        return head2;
    }

void reverse(ListNode* &head,ListNode* curr,ListNode* prev){
        if(curr == NULL){
            head = prev;
            return;
        }
        ListNode* forward = curr->next;
        
        reverse(head,forward,curr);
        curr->next = prev;
        
    }

int main(){
    ListNode* head = new ListNode(0);
    insertAtHead(head,5);
    insertAtHead(head,6);
    insertAtHead(head,7);
    insertAtHead(head,8);
    insertAtHead(head,9);
    printNode(head);

    ListNode* ans = reverse1(head);
    printNode(ans);

/*  ListNode* curr = head;
    ListNode* prev = NULL;  
    reverse(head,curr,prev);
    printf("After Recursively reverse\n");
    printNode(head);

*/
    return 0;
}