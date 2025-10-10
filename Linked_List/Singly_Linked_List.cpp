#include <iostream>
using namespace std;

/*
Implement Singly Linked List --->

Operation	                    Description

1. insertAtBeginning()	        Adds a new node at the start of the list
2. insertAtEnd()	            Adds a new node at the end
3. insertAtPosition()	        Adds a node at any specified 1-based position
4. deleteByValue()	            Deletes the first node that matches a given value
5. search()	                    Searches for a value and prints its position
6. display()	                Prints all the elements of the list
7. ~SinglyLinkedList()	        Destructor that cleans up memory

*/

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

// Singly Linked List Class --->

class SinglyLinkedList
{
private:
    Node *head;

public:
    // Constructor --->
    SinglyLinkedList()
    {
        head = nullptr;
    }

    // Insert at Beginning --->
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        newNode->next = head;
        head = newNode;
        cout << "\nInserted " << value << " at the beginning." << endl;
    }

    // Insert at End --->
    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
        cout << "\nInserted " << value << " at the end." << endl;
    }

    // Insert at Specific Position (1 based) --->
    void insertAtPosition(int value, int position)
    {
        if (position < 1)
        {
            cout << "\nInvalid Position." << endl;
            return;
        }
        Node *newNode = new Node(value);

        if (position == 1)
        {
            newNode->next = head;
            head = newNode;
            cout << "\nInserted " << value << " at position " << position << ".\n";
            return;
        }

        Node *temp = head;
        for (int i = 1; temp != nullptr && i < position - 1; i++)
        {
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "\nPosition out of range.\n";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
        cout << "\nInserted " << value << " at position " << position << ".\n";
    }

    // Delete by Value --->
    void deleteByValue(int value)
    {
        if (head == nullptr)
        {
            cout << "\nList is Empty." << endl;
            return;
        }
        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "\nDeleted node with value " << value << ".\n";
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr && temp->next->data != value)
        {
            temp = temp->next;
        }
        if (temp->next == nullptr)
        {
            cout << "\nValue not found.\n";
            return;
        }

        Node *nodeTodelete = temp->next;
        temp->next = nodeTodelete->next;
        delete nodeTodelete;
        cout << "\nDeleted node with value " << value << ".\n";
    }

    // Search by Value --->
    void search(int value)
    {
        Node *temp = head;
        int position = 1;

        while (temp != nullptr)
        {
            if (temp->data == value)
            {
                cout << "\nValue " << value << " found at position " << position << ".\n";
                return;
            }
            temp = temp->next;
            position++;
        }
        cout << "\nValue " << value << " not found.\n";
    }

    // Display all nodes --->
    void display()
    {
        if (head == nullptr)
        {
            cout << "\nList is Empty." << endl;
            return;
        }

        Node *temp = head;
        cout << "\nLinked List : ";
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destructor to free memory --->
    ~SinglyLinkedList()
    {
        Node *temp;
        while (head != nullptr)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main()
{
    SinglyLinkedList list;

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