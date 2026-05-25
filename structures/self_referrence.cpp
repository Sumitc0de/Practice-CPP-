#include <iostream>
using namespace std;

// Self-referential structure
struct Node
{
    int data;
    Node *next;
};

int main()
{
    Node n1, n2;

    n1.data = 10;
    n2.data = 20;

    n1.next = &n2;
    n2.next = NULL;

    // Temporary pointer for traversal
    Node *temp = &n1;

    // Print linked list
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}