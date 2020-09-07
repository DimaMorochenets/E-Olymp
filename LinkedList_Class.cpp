#include <iostream>

class ListNode
{
public:
    int data;
    ListNode* next;
    ListNode(int data);
};
class LinkedList
{
public:
    ListNode* head, * tail;
    LinkedList();
    bool Empty();
    void addFirst(int val);
    void addLast(int val);
    bool removeFirst();
    bool removeLast();
    int size();
    void Print();
};

ListNode::ListNode(int data)
{
    this->data = data;
    this->next = nullptr;
}
LinkedList::LinkedList()
{
    this->head = nullptr;
    this->tail = nullptr;
}
bool LinkedList::Empty()
{
    return (this->head == nullptr) ? true : false;
}
void LinkedList::addFirst(int val)
{
    ListNode* node = new ListNode(val);
    if (this->Empty()) {
        this->head = node;
        return;
    }
    node->next = this->head;
    this->head = node;
}
void LinkedList::addLast(int val)
{
    ListNode* node = new ListNode(val);
    if (this->Empty()) {
        this->head = node;
        return;
    }
    this->tail = this->head;
    while (this->head->next != nullptr)
        this->head = this->head->next;
    this->head->next = node;
    this->head = this->tail;
    this->tail = nullptr;
}
bool LinkedList::removeFirst()
{
    if (this->Empty())
        return false;
    ListNode* node = this->head->next;
    delete this->head;
    this->head = node;
    return true;
}
bool LinkedList::removeLast()
{
    if (this->Empty())
        return false;
    this->tail = this->head;
    while (this->head->next->next != nullptr)
        this->head = this->head->next;
    delete this->head->next;
    this->head->next = nullptr;
    this->head = this->tail;
    this->tail = nullptr;
    return true;
}
int LinkedList::size()
{
    int sz = 0;
    for (ListNode* node = head; node != tail; node = node->next)
        sz++;
    return sz;
}
void LinkedList::Print()
{
    for (ListNode* node = head; node != tail; node = node->next)
        printf("%d ", node->data);
}

int main()
{
    LinkedList list;

    list.addFirst(1);
    list.addLast(1);
    list.addFirst(2);
    list.addLast(2);
    list.addFirst(3);
    list.addLast(3);
    list.addFirst(4);
    list.addLast(4);
    list.addFirst(5);
    list.addLast(5);
    list.Print();
    std::cout << std::endl;
    list.removeFirst();
    list.Print();
    std::cout << std::endl;
    list.removeLast();
    list.Print();
    std::cout << std::endl;
    list.addFirst(5);
    list.addLast(5);
    list.Print();
    std::cout << std::endl;
    std::cout << list.size() << std::endl;

    return 0;
}