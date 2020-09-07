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
        int sum(ListNode* head)
        {
            if(head == nullptr)
                return 0;
            return head->val + sum(head->next);
        }
};

int main()
{
    int value;
    std::cin >> value;
    ListNode list(value);
    while(std::cin >> value)
        list.push(value);

    std::cout << list.sum(&list);
}

/*Given a linked list, find the sum of its elements.

Definition of a single linked list:

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

Implement function sum to find the sum of linked list elements.

int sum(ListNode *head)*/