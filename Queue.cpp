/*22070123129*/
/*Varun Pagote*/
/*Queue Implimentation*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the queue

class Queue {
private:
    int front, rear;
    int arr[MAX_SIZE];

public:
    Queue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1) || (rear == front - 1);
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
        } else {
            if (front == -1) {
                front = rear = 0;
            } else {
                rear = (rear + 1) % MAX_SIZE;
            }
            arr[rear] = data;
            cout << "Enqueued: " << data << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
        } else {
            int data = arr[front];
            if (front == rear) {
                front = rear = -1;
            } else {
                front = (front + 1) % MAX_SIZE;
            }
            cout << "Dequeued: " << data << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
        } else {
            int i = front;
            cout << "Queue elements: ";
            while (i != rear) {
                cout << arr[i] << " ";
                i = (i + 1) % MAX_SIZE;
            }
            cout << arr[rear] << endl;
        }
    }
};

int main() {
    Queue q;
    int choice, data;

    while (true) {
        cout << "Queue Menu:" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter data to enqueue: ";
                cin >> data;
                q.enqueue(data);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
1
