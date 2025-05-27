#include<iostream>
using namespace std;

class que {
    public:
    int rear = -1, front = -1;
    int arr[10];
    
    void enqueue(int a) {
        if(rear >= 9) {  // Check if queue is full
            cout << "Overflow condition ";
            return;
        }
        if(front == -1) {  // If queue was empty
            front = 0;     // Initialize front
        }
        arr[++rear] = a;   // First increment rear, then assign
        cout << "data saved: " << a << endl;
    }
    
    int dequeue() {
        if(front == -1 || front > rear) {  // Check if queue is empty
            cout << "Underflow ";
            return -1;  // Return some invalid value
        }
        cout << "dequeued: ";
        return arr[front++];  // Return front element and move front forward
    }
};

int main() {
    que q;
    q.enqueue(12);
    q.enqueue(13);
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;  // This will show underflow
    return 0;
}