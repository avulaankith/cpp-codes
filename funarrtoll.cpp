// A program to store an array as linked list and print the linked list

#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *right;
};

Node *makell(int *arr, int n, Node *h)
{
    Node *inip = new Node();
    Node *next = NULL;
    int val;
    for (int i = 0; i < n; i++)
    {
        next = new Node();
        val = arr[i];
        if (i == 0)
        {
            inip = h;
        }

        h->data = val;
        if (i == n - 1)
        {
            h->right = NULL;
            continue;
        }

        h->right = next;
        h = h->right;
    }
    return inip;
}

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
    Node *f = makell(arr, num, head);
    cout << "The elements of linked list is/are: ";
    printList(f);
    cout << endl;
    return 0;
}
