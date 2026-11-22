#include <iostream>
using namespace std;
struct Node2 {
  int data;
  Node2 *next;
  Node2 *prev;

  Node2(int value) {
    data = value;
    next = nullptr;
    prev = nullptr;
  }
};
class LinkedList_stack {

private:
  Node2 *head;
  Node2 *tail;

public:
  LinkedList_stack() {
    head = nullptr;
    tail = nullptr;
  }

  LinkedList_stack(int data) {
    Node2 *firstNode2 = new Node2(data);
    head = tail = firstNode2;

  }
/*
  Node2 *find(int value) {
    if (head == nullptr)
      return nullptr;

    Node2 *current = head;

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

    Node2 *current = head;

    do {
      cout << current->data << "   ";
      current = current->next;
    } while (current != head);
  }

  void push(int data) {

    Node2 *newNode2 = new Node2(data);

    if (head == nullptr) {
      head = tail = newNode2;
      return;
    }
    newNode2 ->prev = head;

    head->next = newNode2;

    head = newNode2;
  }

 int pop(){
   
    if(head == nullptr){
      cout<<"the linkedStack is Empty";
    }
    int data = head->data;
    Node2 *temp = head;
    head = head->prev;

    delete temp;

    cout<<data<<" poped \n";



    return data;
  }


  /*
  void InsertAfter(int data, int afterData) {

    Node2 *current = find(afterData);

    if (current == nullptr) {
      cout << "the list is empty\n";
      return;
    }

    Node2 *newNode2 = new Node2(data);

    newNode2->next = current->next;
    newNode2->prev = current;

    current->next->prev = newNode2;
    current->next = newNode2;

    if (current == tail)
      tail = newNode2;
  }

*/
/*
  void InsertBefore(int data, int beforeData) {

    Node2 *current = find(beforeData);

    if (current == nullptr)
      return;

    Node2 *newNode2 = new Node2(data);

    newNode2->next = current;
    newNode2->prev = current->prev;

    current->prev->next = newNode2;
    current->prev = newNode2;

    if (current == head)
      head = newNode2;
  }

*/
/*
  int GetCount() {

    if (head == nullptr)
      return 0;

    int count = 0;
    Node2 *current = head;

    do {
      count++;
      current = current->next;
    } while (current != head);

    return count;
  }

  int GetDataByIndex(int index) {

    if (index < 0) {
      cout << "Invalid index";
      return 0;
    }

    Node2 *current = head;
    int count = 0;

    if (head == nullptr) {
      cout << "Empty list";
      return 0;
    }

    while (current != nullptr) {

      if (count == index)
        return current->data;

      current = current->next;
      count++;

      if (current == head)
        break;
    }

    throw out_of_range("Index out of range");
  }
*/
  // Destructor
  // ~LinkedList_stack() {

  //   if (head == nullptr)
  //     return;

  //   Node2 *current = head;

  //   while (current) {
  //     Node2 *temp = current;
  //     current = current->prev;
  //     delete temp;
  //   }
 
  //      delete head;

 

  //   head = nullptr;
  //   tail = nullptr;
  // }
};
