#include <iostream>
#include <string>

struct StringNode {
    std::string name;
    StringNode* next;
};


void printList(const StringNode* head) {
    const StringNode* temp = head;
    while (temp) {
        std::cout << temp->name << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL" << std::endl;
}

void append(StringNode*& head, const std::string& name) {
    StringNode* newNode = new StringNode;
    newNode->name = name;
    newNode->next = nullptr;
    if (!head) {
        head = newNode;
        return;
    }
    StringNode* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void freeList(StringNode*& head) {
    while (head) {
        StringNode* temp = head;
        head = head->next;
        delete temp;
    }
}

// Remove duplicate names from the linked list
// Function takes a reference to a pointer (StringNode*&) so it can modify the head in main if needed
void removeDuplicatedNames(StringNode*& head) {
    

    if (head == nullptr || head->next == nullptr) { // Safety check: if list is empty (nullptr) or has only 1 node, duplicates are impossible
        return; // Exit the function early
    } 
   
    StringNode* current = head; // 'current' is our anchor; we compare every node following it to this node's name

    while (current != nullptr && current->next != nullptr) {
        StringNode* iterator = current; // 'iterator' acts as a scout that stays one step behind the node it is checking
        // Inner loop: scan the rest of the list specifically for duplicates of 'current->name'
        while (iterator->next != nullptr) {
            // Compare the anchor's name with the name of the NEXT node in the sequence
            if (current->name == iterator->next->name) {          
                StringNode* duplicate = iterator->next; // 1. Temporary pointer to "catch" the duplicate node so we don't lose it
                iterator->next = iterator->next->next; // 2. Bypass: tell the current node to point to the one AFTER the duplicate
                delete duplicate; // 3. Manual memory management: free the heap memory allocated for the duplicate
                // Note: We do NOT move the iterator here because the NEW 'iterator->next' hasn't been checked for a duplicate yet.
            } else {
                iterator = iterator->next; // If no duplicate was found, safely move the scout to the next node
            }
        }
        
        // Move the anchor forward to check the next unique name in the list
        // (Without this line, the outer loop never ends!)
        current = current->next; 
    }
}

int main() {
    StringNode* head = nullptr;
    append(head, "Alice");
    append(head, "Alice");
    append(head, "Bob");
    append(head, "Charlie");
    append(head, "David");
    printList(head);
    removeDuplicatedNames(head);
    printList(head);
    freeList(head);

    return 0;
}
