#include <iostream>
using namespace std;

// Node structure for circular doubly linked list
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = next = nullptr;
    }
};

// Circular Doubly Linked List class
class CircularDoublyLL
{
private:
    Node *head;

public:
    // Constructor
    CircularDoublyLL()
    {
        head = nullptr;
    }

    // Insert at beginning --->
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            Node *last = head->prev;
            newNode->next = head;
            newNode->prev = last;
            head->prev = newNode;
            last->next = newNode;
            head = newNode;
        }
        cout << "\nInserted " << value << " at the beginning." << endl;
    }

    // Insert at end --->
    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            Node *last = head->prev;
            newNode->next = head;
            newNode->prev = last;
            last->next = newNode;
            head->prev = newNode;
        }
        cout << "\nInserted " << value << " at the end." << endl;
    }

    // Insert at position (1-based) --->
    void insertAtPosition(int value, int position)
    {
        if (position < 1)
        {
            cout << "\nPosition invalid." << endl;
            return;
        }
        if (position == 1)
        {
            insertAtBeginning(value);
            return;
        }
        Node *temp = head;
        int count = 1;

        while (count < position - 1 && temp->next != nullptr)
        {
            temp = temp->next;
            count++;
        }

        if (count != position - 1)
        {
            cout << "\nPosition out of range." << endl;
            return;
        }
        Node *newNode = new Node(value);
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        temp->next->prev = newNode;

        cout << "\nInserted " << value << " at position " << position << endl;
    }
};

int main()
{

    return 0;
}