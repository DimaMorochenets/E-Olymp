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
        ListNode* detectCycle(ListNode* head)
        {
            if (head == nullptr)
                return nullptr;
            ListNode* temp1 = head;
            ListNode* temp2 = head->next;
            while (temp1 != nullptr && temp2 != nullptr) {
                if (temp1 == temp2)
                    break;
                temp2 = temp2->next;
                if (temp1 == temp2)
                    break;
                if (temp1 == nullptr || temp2 == nullptr)
                    return nullptr;
                temp1 = temp1->next;
                temp2 = temp2->next;
                if (temp1 == nullptr || temp2 == nullptr)
                    return nullptr;
            }

            while (head != temp1) {
                do {
                    temp1 = temp1->next;
                    if (head == temp1)
                        return head;
                } while (temp1 != temp2);
                head = head->next;
            }

            return head;
        }
};

int main()
{
    ListNode list(1);
    list.next = new ListNode(2);
    list.next->next = new ListNode(3);
    list.next->next->next = new ListNode(4);
    list.next->next->next->next = new ListNode(5);
    list.next->next->next->next->next = new ListNode(6);
    list.next->next->next->next->next->next = list.next;

    std::cout << list.detectCycle(&list)->val;

    return 0;
}

/*Given a linked list. 
Return pointer to the node where cycle starts. 
If there is no cycle, return null.

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

Implement a function detectCycle that returns a pointer to the node where cycle starts. If there is no cycle, return null.

ListNode* detectCycle(ListNode *head)*/