//https://leetcode.com/submissions/detail/1110729542/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:

    ListNode* reverseUsingRecursion(ListNode *prev, ListNode *curr){
        //base case
        if(curr == NULL){
            return prev;
        }

        //1 case hamne solve kia
        ListNode *nextNode = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = nextNode;

        //baki recursion dekhega
        ListNode *recursionKaAns = reverseUsingRecursion(prev, curr);
        return recursionKaAns;


    }

    ListNode* reverseList(ListNode* head) {

        ListNode *prev=NULL;
        ListNode *curr=head;

        return reverseUsingRecursion(prev, curr);

        // while(curr != NULL){
        //     ListNode *nextNode = curr->next;
        //     curr->next = prev;
        //     prev = curr;
        //     curr = nextNode;
        // }

        // return prev;

    }
};


int main(){




    return 0;
}