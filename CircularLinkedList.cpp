
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        this->data = value;
        this->next = nullptr;
    }
};

class CircularLinkedList
{
public:

    CircularLinkedList()
    {
        head_node = nullptr;
    }
    Node* head_node;



    void insertAtIndex(int index, int value)
    {

        Node* prev = nullptr;
        int current_index = 0;

        Node* new_node = new Node(value);

        if (index < 0) return;

        if (index == 0)
        {
            insertAtBeginning(value);
        }
        else
        {
            Node* curr = head_node;
            while (current_index < index)
            {
                prev = curr;
                curr = curr->next;
                current_index++;
            }

            prev->next = new_node;
            new_node->next = curr;
            // curr->next = new_node;
        }

        cout << "Inserted at " << index << " index - Value : " << value << endl;
    }



    void insertAtBeginning(int value)
    {
        Node* new_node = new Node(value);

        if (head_node == nullptr)
        {
            head_node = new_node;
            head_node->next = new_node;
        }
        else
        {
            Node* curr = head_node;
            while (curr->next != head_node)
            {
                curr = curr->next;
            }

            curr->next = new_node;
            new_node->next = head_node;
            head_node = new_node;
        }

        cout << "Inserted at Beginning - Value : " << value << endl;

        return;
    }


    void insertAtEnd(int value)
    {
        Node* new_node = new Node(value);

        if (head_node == nullptr)
        {
            // insertAtBeginning(value);
            head_node = new_node;
            head_node->next = head_node;
        }
        else
        {
            Node* curr = head_node;
            while (curr->next != head_node)
            {
                curr = curr->next;
            }

            curr->next = new_node;
            new_node->next = head_node;
        }

        cout << "Inserted at End - Value : " << value << endl;

    }



    void deleteFromIndex(int index)
    {
        // Node* curr = head_node;
        // Node* prev = nullptr;
        // int current_index = 0;

        // if(current_index < 0) return;

        // if(current_index == 0)
        // {
        //     deleteFromBeginning();
        // }

        // while(current_index < index)
        // {
        //     prev = curr;
        //     curr = curr->next;
        //     current_index++;
        // }

        // prev->next = curr->next;
        // delete(curr);


        Node* prev = nullptr;
        int current_index = 0;


        if (index < 0) return;

        if (index == 0)
        {
            deleteFromBeginning();
        }
        else
        {
            Node* curr = head_node;
            while (current_index < index)
            {
                prev = curr;
                curr = curr->next;
                current_index++;
            }

            prev->next = curr->next;
            cout << "Deleted at " << index << " index - Value : " << curr->data << endl;
            delete(curr);
        }

    }



    void deleteFromBeginning()
    {
        if (head_node == nullptr)
            return;
        if (head_node->next == head_node)
        {
            cout << "Deleted at Head - Value : " << head_node->data << endl;
            delete(head_node);
            head_node = nullptr;
        }
        else
        {
            Node* curr = head_node;
            while (curr->next != head_node)
            {
                curr = curr->next;
            }

            Node* temp = head_node;
            curr->next = head_node->next;
            head_node = head_node->next;
            cout << "Deleted at Head - Value : " << temp->data << endl;
            delete temp;
        }

    }



    void deleteFromEnd()
    {
        Node* curr = head_node;
        Node* prev = nullptr;

        if (head_node == nullptr)
            return;
        if (head_node->next == head_node)
        {
            cout << "Deleted at End - Value : " << head_node->data << endl;
            delete head_node;
            head_node = nullptr;
        }
        else
        {
            Node* curr = head_node;
            while (curr->next != head_node)
            {
                prev = curr;
                curr = curr->next;
            }

            prev->next = head_node;
            cout << "Deleted at Head - Value : " << curr->data << endl;
            delete curr;
        }
    }



    void traverse()
    {
        Node* curr = head_node;

        cout << "\nTraversing the List : ";

        cout << curr->data << " ";
        curr = curr->next;

        while (curr != head_node)
        {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }



    void findTheMiddle()
    {
        Node* fast = head_node;
        Node* slow = head_node;
        int current_index = 0;

        while (fast->next != head_node && fast->next->next != head_node)
        {
            fast = fast->next->next;
            slow = slow->next;
            current_index++;
        }

        cout << "The middle index is " << current_index << endl;
        cout << "Data : " << slow->data << endl;
    }



    void reverse()
    {

    }
};

int main() {
    CircularLinkedList cll;

    cll.insertAtEnd(1);
    cll.insertAtEnd(2);
    cll.insertAtEnd(3);
    cll.insertAtEnd(4);
    cll.insertAtEnd(5);

    cout << "Original List: ";
    cll.traverse();

    cll.insertAtBeginning(0);
    cout << "After Insert at Beginning: ";
    cll.traverse();

    cll.insertAtIndex(3, 99);
    cout << "After Insert at Index 3: ";
    cll.traverse();

    cll.deleteFromBeginning();
    cout << "After Delete from Beginning: ";
    cll.traverse();

    cll.deleteFromEnd();
    cout << "After Delete from End: ";
    cll.traverse();

    cll.findTheMiddle();

    return 0;
}






















