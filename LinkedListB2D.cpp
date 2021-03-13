/*
Convert Binary Number in a Linked List to Integer
Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. 
The linked list holds the binary representation of a number.
Return the decimal value of the number in the linked list.
Example 1:
Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10
       int val;
       ListNode *next;
       ListNode() : val(0), next(nullptr) {}
       ListNode(int x) : val(x), next(nullptr) {}
       ListNode(int x, ListNode *next) : val(x), next(next) {}

*/

  //Definition for singly-linked list.

  #include<iostream>
  #include<math.h>

  using namespace std;


    struct ListNode {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int n) : val(n), next(nullptr) {}
        ListNode(int n, ListNode* next) : val(n), next(next) {}
   };

 int getDecimalValue(ListNode* head) {
        ListNode* tmp = head;
        int len = 0, ans = 0;
        while(head){
            len++;
            head = head->next;
        }
        head = tmp;
        while(len){
            ans += (head->val)*pow(2, len - 1);
            head = head->next;
            cout << ans << endl;
            len--;
        }
        return ans;
    }

    int main(){
      ListNode n4(1);
      ListNode n3(1, &n4);
      ListNode n2(1, &n3);
      ListNode n1(1, &n2);

      
      int ans = getDecimalValue(&n1);

      cout << "answer in dec : "<< ans << endl;

      return 0;
    }