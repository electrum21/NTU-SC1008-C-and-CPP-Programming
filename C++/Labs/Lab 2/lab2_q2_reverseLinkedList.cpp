///////// Student Info/////////
//
//           Your Name:__________
//      Your NTU Email:__________
//
//
//

#include <iostream>
#include <string>
using namespace std;

struct StringNode {
    string name;
    StringNode* next;
};

void destroyList(StringNode*& head)
{
    StringNode *nodePtr = head;  // Start at head of list
    StringNode *garbage = nullptr;

    while (nodePtr != nullptr)
    {
        // garbage keeps track of node to be deleted
        garbage = nodePtr;
        // Move on to the next node, if any
        nodePtr = nodePtr->next;
        // Delete the "garbage" node
        delete garbage;
        garbage = nullptr;
    }
    head = nullptr;
}

void printLinkedList(const StringNode* head) {
    const StringNode* current = head;
    while (current != nullptr) {
        cout << current->name;
        if (current->next != nullptr) {
            cout << " -> ";
        }
        current = current->next;
    }
    cout << endl;
}

void insertNode2ListEnd(StringNode*& head, const string& newName) {
    StringNode* newNode = new StringNode;
    newNode->name = newName;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    StringNode* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to reverse the linked list
void reverseLinkedList(StringNode*& head) {
    // If the list is empty or has only one node, no reversal needed 
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    StringNode* prev = nullptr;
    StringNode* curr = head;
    StringNode* nextNode = nullptr;

    while (curr != nullptr) {
        // 1. Store the next node 
        nextNode = curr->next;
        
        // 2. Reverse the current node's pointer
        curr->next = prev;
        
        // 3. Move pointers forward for the next iteration
        prev = curr;
        curr = nextNode;
    }

    // 4. Update the head to point to the new first node (the old last node)
    head = prev;
}

int main() {
    StringNode* head = nullptr; // Initialize an empty linked list

    /////// Case 1 ////////////
    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);
    // Reverse the linked list
    reverseLinkedList(head);
    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);
    cout << endl;

    /////// Case 2 ////////////
    insertNode2ListEnd(head, "Michael");
    cout << "Original Linked List: ";
    printLinkedList(head);
    // Reverse the linked list
    reverseLinkedList(head);
    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);
    cout << endl;

    /////// Case 3 ////////////
    insertNode2ListEnd(head, "Emily");
    insertNode2ListEnd(head, "James");
    insertNode2ListEnd(head, "William");
    // Print the original linked list
    cout << "Original Linked List: ";
    printLinkedList(head);
    // Reverse the linked list
    reverseLinkedList(head);
    // Print the reversed linked list
    cout << "Reversed Linked List: ";
    printLinkedList(head);
    cout << endl;

    destroyList(head);
    return 0;
}
