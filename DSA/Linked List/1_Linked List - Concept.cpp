//Question - https://www.codechef.com/learn/course/linked-lists/LINKEDLIST01/problems/LINK01P01
//Solution - https://www.codechef.com/viewsolution/1113147199


#include <iostream>
using namespace std;

// Create a struct with two values
struct Node {
    int value;
    Node* next;
    
    // Constructor to initialize the node with a given value
    Node(int val): value(val), next(nullptr) {}
};

int main() {
    // Creating head of the Linked list
    Node* head = new Node(1);
    cout << "The value at head is " << head -> value << '\n';
}



