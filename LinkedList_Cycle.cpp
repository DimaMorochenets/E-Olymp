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
        int hasCycle(ListNode* head)
        {
            if(head == nullptr)
                return 0;
            ListNode* temp = head->next;
            while(head != nullptr && temp != nullptr){
                if(head == temp)
                    return 1;
                temp = temp->next;
                if(head == temp)
                    return 1;
                if(head == nullptr || temp == nullptr)
                    return 0;
                temp = temp->next;
                head = head->next;
            }
            return 0;
        }
};

int main()
{
    ListNode list(1);
    list.next = new ListNode(2);
    list.next->next = new ListNode(3);
    list.next->next->next = new ListNode(4);
    list.next->next->next->next = new ListNode(5);
    

    std::cout << list.hasCycle(&list);

    return 0;
}

/*Given a linked list. Does it contain a cycle?

Definition of a single linked list:

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

Implement a function hasCycle that returns 1 if linked list contains a cycle and 0 otherwise.

int hasCycle(ListNode *head)*/