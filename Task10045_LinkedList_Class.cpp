#include <iostream>

class ListNode
{
public:
    int data;
    ListNode* next;
    ListNode(int data) : data(data), next(nullptr) {}
};
class LinkedList
{
public:
    ListNode* head, * tail;
    LinkedList() : head(nullptr), tail(nullptr) {}
    bool Empty()
    {
        return (head == nullptr) ? true : false;
    }
    void addFirst(int val)
    {
        ListNode* node = new ListNode(val);
        if (Empty()) {
            head = node;
            tail = node;
            return;
        }
        node->next = head;
        head = node;
    }
    void addLast(int val)
    {
    ListNode* node = new ListNode(val);
        if (Empty()) {
            head = node;
            tail = node;
            return;
        }
        tail->next = node;
        tail = node;
    }
    bool removeFirst()
    {
        if (Empty())
            return false;
        if (head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
            return true;
        }
        ListNode* node = head->next;
        delete head;
        head = node;

        return true;
    }
    bool removeLast()
    {
        if (Empty())
            return false;
        if (head == tail) {
            delete head;
            head = nullptr;
            tail = nullptr;
            return true;
        }
        ListNode* node = head;
        while (node->next != tail)
            node = node->next;
        delete tail;
        tail = node;

        return true;
    }
    void Print()
    {
        if (head == nullptr)
            return;
        for (ListNode* node = head; node != tail->next; node = node->next)
            printf("%d ", node->data);
        printf("\n");
    }
    int size()
    {
        if (head == nullptr)
            return 0;
        int sz = 0;
        for (ListNode* node = head; node != tail->next; node = node->next) sz++;
        return sz;
    }
};

int main()
{
    LinkedList list;

    list.Print();
    list.Empty();
    list.size();
    list.addFirst(0);
    list.removeFirst();
    list.addFirst(0);
    list.removeLast();
    list.addLast(0);
    list.removeFirst();
    list.addLast(0);
    list.removeLast();
    list.addFirst(0);
    list.addLast(1);
    list.addLast(2);
    list.addFirst(-1);
    list.addFirst(-2);
    list.Print();
    list.Empty();
    list.size();

    return 0;
}

/*Implement a Single Linked List data structure that supports next operations:

Empty - Checks if list is empty. Return true or false.
addFirst - Add element to the start of a list.
addLast - Add element to the end of a list.
removeFirst - Remove element from the start of a list.
removeLast - Remove element from the end of a list.
size - Return the number of elements in a list.
Print - Print in one line the elements of a list.
Write the code according to the next interface:

class ListNode
{
public:
  int data; // node value
  ListNode *next; // pointer to the next node 
  ListNode(int data); // constructor
};

class LinkedList
{
public:
  ListNode *head, *tail;  // pointers to the head and to the tail of the list
  LinkedList(); // constructor
  bool Empty(); // check if list is empty
  void addFirst(int val); // add val to the head of the list
  void addLast(int val); // add val to the tail of the list
  bool removeFirst(); // delete first element of the list, return true is removed successfully
  bool removeLast(); // delete last element of the list, return true is removed successfully
  int size(); // return the size of the list
  void Print(); // print values of the list in one line
};*/