#include <iostream>
#include <windows.h>
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
        if (position == 1 || head == nullptr)
        {
            insertAtBeginning(value);
            return;
        }
        Node *temp = head;
        int count = 1;

        while (count < position - 1 && temp->next != head)
        {
            temp = temp->next;
            count++;
        }

        if (count != position - 1 && temp->next == head)
        {
            cout << "\nPosition out of range." << endl;
            return;
        }
        Node *newNode = new Node(value);
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;

        cout << "\nInserted " << value << " at position " << position << endl;
    }

    // Delete by value --->
    void deleteByValue(int value)
    {
        if (head == nullptr)
        {
            cout << "\nList is empty." << endl;
            return;
        }
        Node *temp = head;

        // Case 1 : Only one node
        if (head->next == head && head->data == value)
        {
            delete head;
            head = nullptr;
            cout << "\nDeleted node with value " << value << endl;
            return;
        }

        // Case 2 : Deleting head node
        if (head->data == value)
        {
            Node *last = head->prev;
            last->next = head->next;
            head->next->prev = last;
            Node *del = head;
            head = head->next;
            delete del;
            cout << "\nDeleted node with value " << value << endl;
            return;
        }

        // Case 3 : Deleting middle or last node
        while (temp->next != head && temp->data != value)
        {
            temp = temp->next;
        }
        if (temp->data != value)
        {
            cout << "\nValue not found." << endl;
            return;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;

        cout << "\nDeleted node with value " << value << endl;
    }

    // Search a value
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

    // Display forward
    void displayForward()
    {
        if (head == nullptr)
        {
            cout << "\nList is empty." << endl;
            return;
        }
        Node *temp = head;
        cout << "\nForward : ";
        do
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(head)" << endl;
    }

    // Display backward
    void displayBackward()
    {
        if (head == nullptr)
        {
            cout << "\nList is empty." << endl;
            return;
        }
        Node *last = head->prev;
        Node *temp = last;
        cout << "\nBackward : ";
        do
        {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        } while (temp != last);
        cout << "(head)" << endl;
    }

    // Destructor --->
    ~CircularDoublyLL()
    {
        if (head == nullptr)
        {
            return;
        }
        Node *temp = head->next;
        while (temp != head)
        {
            Node *nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        delete head;
        head = nullptr;
    }
};

int main()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 11);
    cout << "======================================\n";
    cout << "     Circular Doubly Linked List    \n";
    cout << "======================================\n";

    SetConsoleTextAttribute(hConsole, 7);
    CircularDoublyLL list;

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