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

//#include<bits/stdc++.h>
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

// Function to print alternate nodes (1,3,5,...)
void printAlternate(Node *head)
{
    Node *temp = head;
    int pos = 1;

    while (temp != NULL)
    {
        if (pos % 2 == 1)
        {
            cout << temp->val << " ";
        }
        temp = temp->next;
        pos++;
    }
}

// Function to insert at tail
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int countGreater(Node *head, int K)
{
    int cnt = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->val > K)
        {
            cnt++;
        }
        temp = temp->next;
    }

    return cnt;
}
int sumOfOdd(Node *head)
{
    int sum = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->val % 2 != 0)
        {
            sum += temp->val;
        }
        temp = temp->next;
    }

    return sum;
}


bool hasDuplicateBrute(Node *head)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->val == j->val)
                return true;
        }
    }
    return false;
}

int secondLast(Node *head)
{
    // if list has less than 2 nodes
    if (head == NULL || head->next == NULL)
        return -1;

    Node *temp = head;

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    return temp->val;
}
int findMax(Node *head)
{
    if (head == NULL)
        return -1; // or INT_MIN depending on requirement

    int maxVal = head->val;
    Node *temp = head->next;

    while (temp != NULL)
    {
        if (temp->val > maxVal)
        {
            maxVal = temp->val;
        }
        temp = temp->next;
    }

    return maxVal;
}
int main()
{
    int n;
    cin >> n;  // number of elements

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        insertAtTail(head, tail, x);
    }

    printAlternate(head);

    return 0;
}