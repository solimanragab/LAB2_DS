#include <iostream>
using namespace std;
struct Node {

  int data;
  Node *next;
  Node *prev;

  Node(int value) {
    data = value;
    next = nullptr;
    prev = nullptr;
  }
};
class LinkedList_queue {

private:
  Node *head;
  Node *tail;

public:
  LinkedList_queue() {
    head = nullptr;
    tail = nullptr;
  }

  LinkedList_queue(int data) {
    Node *firstNode = new Node(data);
    head = tail = firstNode;
  }
  /*
    Node *find(int value) {
      if (head == nullptr)
        return nullptr;

      Node *current = head;

      do {
        if (current->data == value) {
          // cout<<"value exist \n";
          return current;
        }

        current = current->next;

      } while (current != head);
      cout << "Value not found \n";
      return nullptr;
    }
  */
  void display() {
    if (head == nullptr) {
      cout << "Empty List\n";
      return;
    }

    Node *current = head;

    do {
      cout << current->data << "   ";
      current = current->next;
    } while (current);
  }

  void enqueue(int data) {

    Node *newNode = new Node(data);

    if (head == nullptr) {
      head = tail = newNode;
      return;
    }

    newNode->prev = tail;

    tail->next = newNode;

    tail = newNode;
  }

  int dequeue() {
    int data = head->data;
    if (head == nullptr) {
      cout << "the linkedStack is Empty";
    }
    Node *temp = head;
    head = head->next;

    delete temp;

    cout << data << " poped";

    return data;
  }

  // Destructor
  ~LinkedList_queue() {

    if (head == nullptr)
      return;

    Node *current = head->next;

    while (current) {
      Node *temp = current;
      current = current->next;
      delete temp;
    }

    delete head;

    head = nullptr;
    tail = nullptr;
  }
};
