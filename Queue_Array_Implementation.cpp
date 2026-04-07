
#include <iostream>
using namespace std;

struct queue {
    int size;
    int front;
    int rear;
    int *u; 
};


void enqueue(queue *q, int val) {
    if (q->rear == q->size - 1) {
        cout << "Queue is full\n";
        return;
    }
    q->rear++;
    q->u[q->rear] = val;
    cout << val << " enqueued\n";
}


void dequeue(queue *q) {
    if (q->rear == q->front) {
        cout << "Queue is empty\n";
        return;
    }
    q->front++;
    int x = q->u[q->front];  
    cout << x << " dequeued\n";
}


void display(queue *q) {
    if (q->rear == q->front) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = q->front + 1; i <= q->rear; i++) { 
        cout << q->u[i] << " ";
    }
    cout << endl;
}

int main() {
    queue q;
    cout << "Enter the size: ";
    cin >> q.size;

    q.u = new int[q.size];  
    q.front = q.rear = -1;  

    
    enqueue(&q, 7);
    enqueue(&q, 6);
    enqueue(&q, 5);
    enqueue(&q, 4);
    enqueue(&q, 3);
    
    
    dequeue(&q);
    dequeue(&q);

    
    display(&q);

   
    delete[] q.u;

    return 0;
}
