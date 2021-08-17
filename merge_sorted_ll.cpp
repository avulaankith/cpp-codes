// A program to merge two sorted linked lists and print them a one sorted linked list

#include <iostream>
#include <vector>
#include <algorithm>
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

Node *mergell(Node *a, Node *b)
{
    vector<int> v;
    while (a != NULL)
    {
        v.push_back(a->data);
        a = a->right;
    }
    while (b != NULL)
    {
        v.push_back(b->data);
        b = b->right;
    }
    sort(v.begin(), v.end());
    Node *c = new Node();
    Node *inip = new Node();
    Node *last = new Node();
    int val;
    // int val;
    for (int i = 0; i < v.size(); i++)
    {
        last = new Node();
        val = v[i];
        if (i == 0)
        {
            inip = c;
        }

        c->data = val;
        if (i == v.size() - 1)
        {
            c->right = NULL;
            continue;
        }

        c->right = last;
        c = c->right;
    }
    return inip;
}

int main(int argc, char const *argv[])
{
    int A[] = {3, 5, 7, 10, 5};
    int B[] = {1, 2, 3, 4, 5};

    Node *head = NULL;
    Node *next = NULL;
    int ASize = sizeof(A) / sizeof(A[0]);
    int BSize = sizeof(B) / sizeof(B[0]);

    int val;
    head = new Node();
    Node *f1 = makell(A, ASize, head);
    head = new Node();
    Node *f2 = makell(B, BSize, head);
    cout << "The elements of linked list is/are: ";
    printList(f1);
    cout << endl;
    cout << "The elements of linked list is/are: ";
    printList(f2);
    cout << endl;
    Node *f3 = mergell(f1, f2);
    cout << "The elements of linked list is/are: ";
    printList(f3);
    cout << endl;
    return 0;
}
