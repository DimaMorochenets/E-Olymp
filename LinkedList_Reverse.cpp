#include <iostream>

class ListNode
{
public:
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
    void push(int x)
    {
        if (this->next == nullptr) {
            this->next = new ListNode(x);
            return;
        }
        this->next->push(x);
    }
    ListNode* reverse(ListNode* head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* left = nullptr;
        ListNode* right = nullptr;

        int count = 0;
        for (ListNode* node = head; node != nullptr; node = node->next)
            count++;

        for (int i = 0; i < count / 2; i++) {
            left = head;
            right = head;
            for (int j = 0; j < i; j++)
                left = left->next;
            for (int j = 0; j < count - i - 1; j++)
                right = right->next;
            int temp = left->val;
            left->val = right->val;
            right->val = temp;
        }
        return head;
    }
    void Print(ListNode* head)
    {
        for (ListNode* node = head; node != nullptr; node = node->next)
            printf("%d ", node->val);
        printf("\n");
    }
};

int main()
{
    ListNode list(1);
    list.next = new ListNode(2);
    list.next->next = new ListNode(3);
    list.next->next->next = new ListNode(4);
    list.next->next->next->next = new ListNode(5);

    list.Print(&list);
    list.reverse(&list);
    list.Print(&list);

    return 0;
}

/*Reverse a linked list.

Definition of a single linked list:

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

Implement function reverse to reverse a linked list.

ListNode* reverse(ListNode *head)*/