#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
};

int main()
{
    Node *head;
    Node *one = new Node();
    Node *two = new Node();
    Node *three = new Node();

    // Assign value values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    // Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    // print the linked list value
    head = one;
    while (head != NULL)
    {
        cout << head->value;
        head = head->next;
    }
}