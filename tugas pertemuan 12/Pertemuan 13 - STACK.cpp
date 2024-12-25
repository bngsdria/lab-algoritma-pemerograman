#include <iostream>
using namespace std;

struct Node {
    int value;  
    Node* prev;
    Node* next;
};

void printListForward(Node* head) {
    cout << "Forward: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printListBackward(Node* tail) {
    cout << "Backward: ";
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->value << " "; 
        temp = temp->prev;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;

    // Alokasi Memory
    one = new Node();
    two = new Node();
    three = new Node();

    // Inisialisasi Nilai
    one->value = 1;
    two->value = 2;
    three->value = 3;

    one->prev = NULL;  
    one->next = two;

    two->prev = one;
    two->next = three;

    three->prev = two;
    three->next = NULL;

    head = one;

    printListForward(head);
    printListBackward(three);

    return 0;
}

