#include <iostream>

using namespace std;

// Node class represents a node in a linked list
class Node {
public:
    int data;       // Data stored in the node
    Node* next;     // Pointer to the next node in the list
};

// Function to detect a loop in a linked
bool detectCycle(Node* head)
{
    Node* fast = head;
    Node* slow = head;

    while (fast->next != nullptr && fast->next->next != nullptr)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
            return 1;
    }

    return 0;
}

int main() {

    // Create a sample linked list with a loop for testing 
    // Copy-paste start here

    // Case 1
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fourth = new Node();
    Node* fifth = new Node();

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = fifth;
    fifth->data = 5;
    fifth->next = third;

    // Case 2

    // Node* head = new Node(); 
    // Node* second = new Node(); 
    // Node* third = new Node(); 
    // head->data = 1; 
    // head->next = second; 
    // second->data = 2; 
    // second->next = third; 
    // third->data = 3; 
    // third->next = nullptr;

    // Case 3

    // Node* head = new Node(); 
    // head->data = 1; 
    // head->next = head;


    // Copy-paste end here

    // Check if there is a loop in the linked list
    if (detectCycle(head)) {
        cout << "Loop detected in the linked list." << endl;
    }
    else {
        cout << "No loop detected in the linked list." << endl;
    }

    // Clean up memory (free the allocated nodes)
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}