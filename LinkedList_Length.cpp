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
        int length(ListNode* head)
        {
            ListNode* temp = head->next;
            int count = 1;
            while(temp != nullptr){
                temp = temp->next;
                count++;
            }

            return count;
        }
};

int main()
{
    int value;
    std::cin >> value;
    ListNode list(value);
    while(std::cin >> value)
        list.push(value);

    std::cout << list.length(&list);
}

/*Given a linked list, find its length. 
The length of a linked list is the number of its elements.

Definition of a single linked list:

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

Implement function length to find the length of linked list.

int length(ListNode *head)*/