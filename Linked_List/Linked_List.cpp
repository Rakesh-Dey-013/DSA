#include <iostream>
using namespace std;

// Implement Singly Linked List --->

class Node
{
public:
    int data;
    Node *next;
    Node *tail;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    Node *tail;

    // Constructor
    LinkedList(int data)
    {
        Node *node = new Node(data);
        head = node;
        tail = node;
    }

    // Insertion at Head
    void insertAtHead(int d)
    {
        Node *temp = new Node(d);
        temp->next = head;
        head = temp;
    }

    // Insert at Tail
    void insertAtTail(int d)
    {
        Node *temp = new Node(d);
        tail->next = temp;
        tail = temp;
    }

    // Print
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list(10);  // initial node with data = 10
    list.insertAtHead(5);
    list.insertAtTail(15);
    list.insertAtTail(20);

    cout << "Linked List: ";
    list.print();

    return 0;
}