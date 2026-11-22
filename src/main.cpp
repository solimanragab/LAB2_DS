#include "../include/Array_Queue.h"
#include "../include/linkedlist_queue.h"
#include "../include/linkedlist_stack.h"
//   #include<iostream>
// using namespace std;
// void f(int x){ cout<<"without const";}
// void f(  int x){cout<<"with const";}
int main() {
  Array_Queue aq;

  // array queue
  aq.add(5);
  aq.add(10);
  aq.add(20);
  aq.add(30);
  aq.add(40);
  aq.display();

  aq.deQueue();
  aq.deQueue();
  aq.deQueue();
  aq.deQueue();
  aq.deQueue();

  aq.display();

  aq.add(50);
  aq.add(40);
  aq.add(30);

  aq.display();

  // LinkedList_stack l1;
  // l1.push(1);
  // l1.push(2);
  // l1.push(3);
  // l1.push(4);
  // l1.pop();
  // l1.pop();
  // l1.pop();
  // l1.pop();

  // l1.display();

  // LinkedList_queue l1;
  // l1.enqueue(1);
  // l1.enqueue(2);
  // l1.enqueue(3);
  // l1.enqueue(4);

  // l1.display();
  // l1.pop_queue();
  // l1.pop_queue();
  // l1.pop_queue();

  // stack with linkedlist
  //  LinkedList_Stack l1;

  // l1.add(10);
  // l1.add(20);
  // l1.add(30);
  // l1.add(40);

  // l1.pop();
  // cout<<endl;
  // l1.display();

  //   l1.find(20);
  // cout << "================================================\n";
  // l1.display();
  // cout << "\n";

  // l1.InsertAfter(25, 44);
  // l1.display();
  // cout << "\n";

  // l1.InsertBefore(15, 44);
  // l1.display();

  // LinkedList_Stack l2;

  // l2.display();
  // cout<<endl;
  // l2.InsertAfter(25, 20);

  // cout << "\n";

  // cout << "Count: " << l1.GetCount() << endl;

  // cout << "Index 2: " << l1.GetDataByIndex(2) << endl;

  return 0;
}