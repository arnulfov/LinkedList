#include "DoublyLinkedList.h"

void DoublyLinkedList::Insert_front(int data) {
    Node* newNode = new Node(); // Create a new node
    newNode->data = data; // Set the data of the new node
    newNode->prev = nullptr; // Set the previous pointer of the new node to nullptr
    newNode->next = head; // Set the next pointer of the new node to the current head

    if (head != nullptr)
        head->prev = newNode; // If the list is not empty, set the previous pointer of the current head to the new node
    else
        tail = newNode; // If the list is empty, set the tail to the new node

    head = newNode; // Set the new node as the new head of the list
    count++; // Increment the count of nodes in the list
}

void DoublyLinkedList::Insert_rear(int data) {
    Node* newNode = new Node(); // Create a new node
    newNode->data = data; // Set the data of the new node
    newNode->prev = tail; // Set the previous pointer of the new node to the current tail
    newNode->next = nullptr; // Set the next pointer of the new node to nullptr

    if (tail != nullptr)
        tail->next = newNode; // If the list is not empty, set the next pointer of the current tail to the new node
    else
        head = newNode; // If the list is empty, set the head to the new node

    tail = newNode; // Set the new node as the new tail of the list
    count++; // Increment the count of nodes in the list
}

int DoublyLinkedList::Remove_front_i() {
    if (head == nullptr) {
        cout << "Error: List is empty" << endl;
        return -1; // Or any other appropriate error code
    }

    Node* temp = head; // Store the current head node in a temporary variable
    int data = temp->data; // Get the data of the head node

    head = head->next; // Move the head to the next node
    if (head != nullptr)
        head->prev = nullptr; // If the list is not empty, set the previous pointer of the new head to nullptr
    else
        tail = nullptr; // If the list becomes empty after removal, set the tail to nullptr

    delete temp; // Delete the old head node
    count--; // Decrement the count of nodes in the list

    return data; // Return the data of the removed node
}

int DoublyLinkedList::Remove_rear_i() {
    if (tail == nullptr) {
        cout << "Error: List is empty" << endl;
        return -1; // Or any other appropriate error code
    }

    Node* temp = tail; // Store the current tail node in a temporary variable
    int data = temp->data; // Get the data of the tail node

    tail = tail->prev; // Move the tail to the previous node
    if (tail != nullptr)
        tail->next = nullptr; // If the list is not empty, set the next pointer of the new tail to nullptr
    else
        head = nullptr; // If the list becomes empty after removal, set the head to nullptr

    delete temp; // Delete the old tail node
    count--; // Decrement the count of nodes in the list

    return data; // Return the data of the removed node
}

int DoublyLinkedList::Size() {
    return count; // Return the count of nodes in the list
}

void DoublyLinkedList::MakeEmpty() {
    while (head != nullptr) {
        Node* temp = head; // Store the current head node in a temporary variable
        head = head->next; // Move the head to the next node
        delete temp; // Delete the old head node
    }

    tail = nullptr; // Set the tail to nullptr
    count = 0; // Reset the count of nodes to 0
}

void DoublyLinkedList::PrintList() {
    Node* current = head; // Start from the head node
    while (current != nullptr) {
        cout << current->data << " "; // Print the data of the current node
        current = current->next; // Move to the next node
    }
}
