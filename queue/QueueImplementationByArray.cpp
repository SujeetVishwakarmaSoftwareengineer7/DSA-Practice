#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;
    int frontIndex;
    int rear;
    int size;

public:
    Queue(int size) {
        this->size = size;
        arr = new int[size];
        frontIndex = 0;
        rear = 0;
    }

    void enqueue(int element) {
        if (rear == size) {
            cout << "Queue is full" << endl;
        }
        else {
            arr[rear] = element;
            rear++;
        }
    }

    int dequeue() {
        if (frontIndex == rear) {
            return -1;
        }

        int ans = arr[frontIndex];
        arr[frontIndex] = -1;
        frontIndex++;

        if (frontIndex == rear) {
            frontIndex = 0;
            rear = 0;
        }

        return ans;
    }

    bool empty() {
        return frontIndex == rear;
    }

    int front() {
        if (frontIndex == rear) {
            return -1;
        }

        return arr[frontIndex];
    }

    ~Queue() {
        delete[] arr;
    }
};

int main() {
    Queue q(100);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl;

    cout << "Deleted element: " << q.dequeue() << endl;

    cout << "Front element: " << q.front() << endl;

    cout << "Is queue empty? " << q.empty() << endl;

    return 0;
}