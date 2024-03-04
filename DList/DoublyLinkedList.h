#include <iostream>
#ifndef DLIST_DOUBLYLINKEDLIST_H
#define DLIST_DOUBLYLINKEDLIST_H

using std::cout;
using std::cin;
using std::endl;

struct Node {
    int data;
    Node* prev;
    Node* next;
};
class DoublyLinkedList {
private:
    Node *head;
    Node *tail;
    int count;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
        count = 0;
    }
    //
    void Insert_front(int data);
    void Insert_rear(int data);
    int Remove_front_i();
    int Remove_rear_i();
    int Size();
    void MakeEmpty();
    void PrintList();
};
#endif //DLIST_DOUBLYLINKEDLIST_H