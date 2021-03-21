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
        void PrintReverse(ListNode* head)
        {
            if(head == nullptr) return;
            PrintReverse(head->next);
            printf("%d ", head->val);
        }
};

int main()
{
    int value;
    std::cin >> value;
    ListNode list(value);
    while(std::cin >> value)
        list.push(value);

    
}

/*Given a linked list, reverse it. 
Print the elements of linked list in the reverse order.

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
Implement function PrintReverse to print the elements of linked list in the reverse order.

void PrintReverse(ListNode *head)*/