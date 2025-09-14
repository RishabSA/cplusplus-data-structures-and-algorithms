#include <iostream>

class Node {
    // Getters and setters
public:
    int current;
    Node* next = nullptr;

    Node(int c) {
        current = c;
        std::cout << "Added: " << c << std::endl;
    };
};

class LinkedList {
public:
    Node* root = nullptr;
    Node* tail = nullptr;

    LinkedList(int val) {
        root = new Node(val);
        tail = root;
    };

    LinkedList() = default;

    void printAll() {
        Node* currentNode = root;

        while (currentNode != nullptr) {
            std::cout << currentNode->current << std::endl;
            currentNode = currentNode->next;
        }
    };

    bool append(int newVal) {
        // This way is more inefficient

        // Node* currentNode = root;

        // while (currentNode->next != nullptr) {
        //     currentNode = currentNode->next;
        // }

        // currentNode->next = new Node(newVal);

        if (tail == nullptr) {
            root = new Node(newVal);
            tail = root;
            return true;
        }

        tail->next = new Node(newVal);
        tail = tail->next;

        return true;
    };

    // Insert

    // Pop

    // Delete

    // findIndex

    // valueAtIndex
};

int main () {
    LinkedList ll = LinkedList(5);
    ll.append(10);
    ll.append(15);
    ll.append(17);

    std::cout << std::endl;

    ll.printAll();

    return 0;
}