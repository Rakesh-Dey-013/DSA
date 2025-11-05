#include <iostream>
#include <windows.h>
using namespace std;

// Node structure for Circular Linked List --->
class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

// Circular Linked List class --->
class CircularLinkedList
{
private:
    Node *head;

public:
    // Constructor
    CircularLinkedList()
    {
        head = nullptr;
    }

    // Insert at the beginning --->
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            newNode->next = head; // points to itself
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
            head = newNode;
        }
        cout << "\nInserted " << value << " at the beginning." << endl;
    }

    // Insert at the end --->
    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            newNode->next = head;
        }
        else
        {
            Node *temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
        cout << "\nInserted " << value << " at the end." << endl;
    }

    // Insert at a specific position --->

    void insertAtPosition(int value, int position)
    {
        if (position < 1)
        {
            cout << "\nInvalid position." << endl;
            return;
        }
        if (position == 1)
        {
            insertAtBeginning(value);
            return;
        }
        Node *newNode = new Node(value);
        Node *temp = head;

        for (int i = 1; i < position - 1 && temp->next != head; i++)
        {
            temp = temp->next;
        }
        if (temp->next == head && position > 2)
        {
            cout << "\nPosition out of range." << endl;
            delete newNode;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "\nInserted " << value << " at position " << position << endl;
    }

    // Delete a node by value --->
    void deleteByValue(int value)
    {
        // Case 1 : Empty List
        if (head == nullptr)
        {
            cout << "\nList is empty." << endl;
            return;
        }
        Node *temp = head;
        Node *prev = nullptr;

        // Case 2 : Head node has the value
        if (head->data == value)
        {
            // only one node
            if (head->next == head)
            {
                delete head;
                head = nullptr;
                cout << "\nDeleted node with value " << value << endl;
                return;
            }

            // Find last node
            Node *last = head;
            while (last->next != head)
            {
                last = last->next;
            }

            // Point last node's next to head->next
            last->next = head->next;

            // Move head to next node
            Node *del = head;
            head = head->next;

            delete del;
            cout << "\nDeleted node with value " << value << endl;
            return;
        }

        // Case 3 : Deleting a non-head node
        do
        {
            prev = temp;       // store previous node
            temp = temp->next; // move forward
        } while (temp != head && temp->data != value);

        // If we looped back to head, value not found
        if (temp == head)
        {
            cout << "\nValue not found." << endl;
            return;
        }

        // Otherwise, skip the node to delete
        prev->next = temp->next;
        delete temp;
        cout << "\nDeleted node with value " << value << endl;
    }

    // Search for a value --->
    void search(int value)
    {
        if (head == nullptr)
        {
            cout << "\nList is empty." << endl;
            return;
        }

        Node *temp = head;
        int position = 1;
        do
        {
            if (temp->data == value)
            {
                cout << "\nValue " << value << " found at position " << position << endl;
                return;
            }
            temp = temp->next;
            position++;
        } while (temp != head);

        cout << "\nValue " << value << " not found." << endl;
    }

    // Display the list --->
    void display()
    {
        if (head == nullptr)
        {
            cout << "\nList is empty." << endl;
            return;
        }

        Node *temp = head;
        cout << "\nCircular Linked List : ";
        do
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);

        cout << "(head)" << endl;
    }

    // Destructor --->
    ~CircularLinkedList()
    {
        if (head == nullptr)
        {
            return;
        }

        Node *temp = head;
        Node *nextNode;

        do
        {
            nextNode = temp->next;
            delete temp;
            temp = nextNode;
        } while (temp != head);

        head = nullptr;
    }
};

// Main function
int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 11);
    cout << "==============================\n";
    cout << "     Circular Linked List    \n";
    cout << "==============================\n";

    SetConsoleTextAttribute(hConsole, 7);
    CircularLinkedList list;

    list.insertAtEnd(10);
    list.insertAtBeginning(5);
    list.insertAtEnd(20);
    list.insertAtPosition(15, 3);
    list.display();

    list.search(20);
    list.deleteByValue(15);
    list.display();

    list.deleteByValue(5);
    list.display();

    return 0;
}