#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <iomanip>
#include <climits>

//#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

// Insert at tail (for input building)
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

// Reverse linked list
Node* reverseList(Node* head)
{
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL)
    {
        Node* nextNode = curr->next; // store next
        curr->next = prev;           // reverse pointer
        prev = curr;                 // move prev
        curr = nextNode;             // move curr
    }

    return prev; // new head
}

// Print linked list
void printList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    Node *head = NULL;
    Node *tail = NULL;

    // 🔹 Input part
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertAtTail(head, tail, x);
    }

    // 🔹 Reverse list
    head = reverseList(head);

    // 🔹 Output
    printList(head);

    return 0;
}