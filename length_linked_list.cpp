#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;   // FIXED
    }
};

// recursive function to find length
int listLength(Node* head) {
    if (head == NULL)
        return 0;

    return 1 + listLength(head->next);
}

// function to insert node at end
void insert(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main() {
    int n;
    cin >> n;

    Node* head = NULL;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert(head, x);
    }

    cout << listLength(head) << endl;

    return 0;
}