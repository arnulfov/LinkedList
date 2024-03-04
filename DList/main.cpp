//Arnulfo Villicana
//COP 3530 Data Structures and Algorithms
//Homework 1: Doubly Linked List
#include <iostream>
#include "DoublyLinkedList.h"

int main() {
    DoublyLinkedList myList;
    int choice;
// Basic menu that allows the user to select a function they want to perform
    do {
        cout << "------ Menu ------" << endl;
        cout << "1. Insert at Front" << endl;
        cout << "2. Insert at Rear" << endl;
        cout << "3. Remove from Front" << endl;
        cout << "4. Remove from Rear" << endl;
        cout << "5. Get List Size" << endl;
        cout << "6. Make List Empty" << endl;
        cout << "7. Print List" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int data;
                cout << "Enter the value to insert at the front: ";
                cin >> data;
                myList.Insert_front(data);
                cout << "Value inserted at the front." << endl;
                break;
            }
            case 2: {
                int data;
                cout << "Enter the value to insert at the rear: ";
                cin >> data;
                myList.Insert_rear(data);
                cout << "Value inserted at the rear." << endl;
                break;
            }
            case 3: {
                int removedData = myList.Remove_front_i();
                if (removedData != -1)
                    cout << "Removed value from the front: " << removedData << endl;
                break;
            }
            case 4: {
                int removedData = myList.Remove_rear_i();
                if (removedData != -1)
                    cout << "Removed value from the rear: " << removedData << endl;
                break;
            }
            case 5: {
                cout << "List size: " << myList.Size() << endl;
                break;
            }
            case 6: {
                myList.MakeEmpty();
                cout << "List emptied." << endl;
                break;
            }
            case 7: {
                cout << "Current List: ";
                myList.PrintList();
                cout << endl;
                break;
            }
            case 0: {
                cout << "Exiting..." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}
