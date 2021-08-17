// A program to copy array to a linked list without using functions.

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
};

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->right;
    }
}

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number of elements for linked list: ";
    cin >> num;
    int arr[num];
    cout << "Enter the array: ";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    Node *head = NULL;
    Node *next = NULL;

    int val;
    head = new Node();

    Node *inip = new Node();
    for (int i = 0; i < num; i++)
    {
        next = new Node();
        val = arr[i];
        if (i == 0)
        {
            inip = head;
        }

        head->data = val;
        if (i == num - 1)
        {
            head->right = NULL;
            continue;
        }

        head->right = next;
        head = head->right;
    }
    cout << "The elements of linked list is/are: ";
    printList(inip);
    cout << endl;
    return 0;
}
