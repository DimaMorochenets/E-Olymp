#include <iostream>

class ListNode
{
    public:
        int val;
        ListNode* next;
        ListNode(int x) : val(x), next(nullptr) {}
        void push(int x) 
        {
            if(this->next == nullptr){
                this->next = new ListNode(x);
                return;
            }
            this->next->push(x);
        }
        ListNode* merge(ListNode* l1, ListNode* l2)
        {
            if (l1 == nullptr && l2 == nullptr)
                return nullptr;
            ListNode* res;
            if (l1 == nullptr) {
                res = new ListNode(l2->val);
                l2 = l2->next;
            }
            else if (l2 == nullptr) {
                res = new ListNode(l1->val);
                l1 = l1->next;
            }
            else if (l1->val < l2->val) {
                res = new ListNode(l1->val);
                l1 = l1->next;
            }
            else {
                res = new ListNode(l2->val);
                l2 = l2->next;
            }
            ListNode* head = res;
            while (l1 != nullptr || l2 != nullptr) {
                if (l1 == nullptr) {
                    res->next = new ListNode(l2->val);
                    l2 = l2->next;
                }
                else if (l2 == nullptr) {
                    res->next = new ListNode(l1->val);
                    l1 = l1->next;
                }
                else if (l1->val < l2->val) {
                    res->next = new ListNode(l1->val);
                    l1 = l1->next;
                }
                else {
                    res->next = new ListNode(l2->val);
                    l2 = l2->next;
                }
                res = res->next;
            }

            return head;
        }
};

int main()
{
    ListNode* list1 = new ListNode(1);
    list1->push(4);
    list1->push(7);
    list1->push(8);
    list1->push(9);

    ListNode* list2 = new ListNode(2);
    list2->push(6);
    list2->push(8);

    list1->merge(list1, list2);

    return 0;
}

/*Merge two sorted linked lists and return it as a new list. 
The new list should be made by splicing together the nodes of the first two lists.

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

Implement function merge that merges two linked lists.

ListNode* merge(ListNode *l1, ListNode *l2)*/