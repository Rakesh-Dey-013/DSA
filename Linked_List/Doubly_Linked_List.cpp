#include <iostream>
#include <windows.h>
using namespace std;

/*
Doubly Linked List --->

Function	                    Description

1. insertAtBeginning()	        Adds a node at the start of the list
2. insertAtEnd()	            Adds a node at the end
3. insertAtPosition()	        Inserts a node at a given 1-based position
4. deleteByValue()	            Removes a node by value
5. search()	                    Finds the position of a node
6. displayForward()	            Prints list from head → tail
7. displayBackward()	        Prints list from tail → head
6. ~DoublyLinkedList()	        Frees all memory (prevents leaks)

*/

// Node structure for Doubly Linked List --->
class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int value)
    {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

// Doubly Linked List class --->
class DoublyLinkedList
{
private:
    Node *head;
    Node *tail;

public:
    // Constructor --->
    DoublyLinkedList()
    {
        head = nullptr;
        tail = nullptr;
    }

    // Insert at beginning --->
    void insertAtBeginning(int value)
    {
        Node *newNode = new Node(value);
        if (head == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        cout << "\nInserter " << value << " at the beginning." << endl;
    }

    // Insert at end --->
    void insertAtEnd(int value)
    {
        Node *newNode = new Node(value);
        if (tail == nullptr)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        cout << "\nInserted " << value << " at the end." << endl;
    }

    // Insert at specific position (1-based) --->
    void insertAtPosition(int value, int position)
    {
        if (position < 1)
        {
            cout << "\nInvalid position." << endl;
            return;
        }
        Node *newNode = new Node(value);

        if (position == 1)
        {
            insertAtBeginning(value);
            return;
        }

        Node *temp = head;
        for (int i = 1; temp != nullptr && i < position - 1; i++)
        {
            temp = temp->next;

            if (temp == nullptr)
            {
                cout << "\nPosition out of range." << endl;
                delete newNode;
                return;
            }

            newNode->next = temp->next;
            newNode->prev = temp;

            if (temp->next != nullptr)
            {
                temp->next->prev = newNode;
            }
            else
            {
                tail = newNode; // new node is at end
            }

            temp->next = newNode;
            cout << "\nInserted " << value << " at position " << position << endl;
        }
    }
    // Delete a node by value --->
    void deleteByValue(int value)
    {
        if (head == nullptr)
        {
            cout << "\nList is empty." << endl;
            return;
        }
        Node *temp = head;

        // If deleting head --->
        if (head->data == value)
        {
            if (head == tail)
            { // Only one node
                delete head;
                head = tail = nullptr;
            }
            else
            {
                head = head->next;
                head->prev = nullptr;
                delete temp;
            }
            cout << "\nDeleted node with value " << value << endl;
            return;
        }

        // traverse to find node --->
        while (temp != nullptr && temp->data != value)
        {
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "\nValue not found." << endl;
            return;
        }

        if (temp == tail)
        { // deleting tail
            tail = tail->prev;
            tail->next = nullptr;
        }
        else
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
        delete temp;
        cout << "\nDeletes node with value " << value << endl;
    }

    // Search for a node --->
    void search(int value)
    {
        Node *temp = head;
        int position = 1;

        while (temp != nullptr)
        {
            if (temp->data == value)
            {
                cout << "\nValue " << value << " found at position " << position << endl;
                return;
            }
            temp = temp->next;
            position++;
        }
        cout << "\nValue " << value << " not found." << endl;
    }

    // Display list from head to tail --->
    void displayForward()
    {
        if (head == nullptr)
        {
            cout << "\nList is empty." << endl;
            return;
        }
        Node *temp = head;
        cout << "\nForward : ";
        while (temp != nullptr)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Display list from tail to head --->
    void displayBackward()
    {
        if (tail == nullptr)
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *temp = tail;
        cout << "\nBackward : ";
        while (temp != nullptr)
        {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }

    // Destructor to free all nodes --->
    ~DoublyLinkedList()
    {
        Node *temp;
        while (head != nullptr)
        {
            temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
    }
};

int main()
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 11);
    cout << "===========================\n";
    cout << "     Doubly Linked List    \n";
    cout << "===========================\n";

    SetConsoleTextAttribute(hConsole, 7);

    DoublyLinkedList list;

    list.insertAtEnd(10);
    list.insertAtBeginning(5);
    list.insertAtEnd(20);
    list.insertAtPosition(15, 3);

    list.displayForward();
    list.displayBackward();

    list.search(20);
    list.deleteByValue(15);
    list.displayForward();

    list.deleteByValue(5);
    list.displayForward();

    return 0;
}