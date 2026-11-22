
#include <iostream>
using namespace std;

class Array_Queue {
private:
     int capacity = 5;

    int size;
    int frontIndex;
    int rearIndex;

public:
    int* arr;

    Array_Queue() {
        size = 0;
        frontIndex = 0;
        rearIndex = 0;
        arr = new int[capacity];
    }

    Array_Queue(int data) {
        arr = new int[capacity];
        arr[0] = data;

        frontIndex = 0;
        rearIndex = 1;
        size = 1;
    }

    void add(int data) {
        if (size == capacity) {
            cout << "Queue is full\n";
            return;
        }

        arr[rearIndex] = data;
        rearIndex = (rearIndex + 1) % capacity;

        size++;

        cout << data << " added\n";
    }

    int deQueue() {
        if (size == 0) {
            cout << "Queue is empty\n";
            return 0;
        }

        int temp = arr[frontIndex];

        frontIndex = (frontIndex + 1) % capacity;
        size--;

        cout << temp << " dequeued\n";

        return temp;
    }

    void display() {
        if (size == 0) {
            cout << "Queue is empty\n";
            return;
        }

        int index = frontIndex;

        for (int i = 0; i < size; i++) {
            cout << arr[index] << " ";
            index = (index + 1) % capacity;
        }

        cout << endl;
    }

    ~Array_Queue() {
        delete[] arr;
    }
};

