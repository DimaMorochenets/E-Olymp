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
    ListNode* intersection(ListNode* l1, ListNode* l2)
    {
        if (l1 == nullptr || l2 == nullptr)
            return nullptr;

        while(l1 != nullptr){
            for(ListNode* node = l2; node != nullptr; node = node->next)
                if(l1 == node)
                    return node;
            l1 = l1->next;
        }
        return nullptr;
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
    ListNode list1(1);
    list1.next = new ListNode(2);
    list1.next->next = new ListNode(3);
    list1.next->next->next = new ListNode(4);
    list1.next->next->next->next = new ListNode(5);

    ListNode list2(-1);
    list2.next = new ListNode(-2);
    list2.next->next = list1.next;

    list1.Print(&list1);
    list2.Print(&list2);
    printf("point of intersection -> %d\n", list1.intersection(&list1, &list2)->val);

    return 0;
}

/*Find the point of intersection of two singly linked lists. 
Return the pointer to the node where the intersection of two lists starts.

Definition of a single linked list:

class ListNode
{
public:
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

Implement a function intersection that returns a pointer to the node where the intersection of two singly linked lists starts.

ListNode* intersection(ListNode *l1, ListNode *l2)*/