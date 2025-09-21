#include <stdio.h>
#define N 5

typedef struct queue {
    int queue[N];
    int Front;
    int Rear;
} str;

// Check if the queue is empty
int isEmpty(str *q) {
    return (q->Front == -1 && q->Rear == -1);
}

// Check if the queue is full
int isFull(str *q) {
    return (q->Rear == N - 1);
}

// Enqueue operation
void Enqueue(int data, str *q) {
    if (isFull(q)) {
        printf("Overflow\n");
    }
    else if (isEmpty(q)) {
        q->Front = q->Rear = 0;
        q->queue[q->Rear] = data;
    } else {
        q->Rear++;
        q->queue[q->Rear] = data;
    }
}

// Dequeue operation
void Dequeue(str *q) {
    if (isEmpty(q)) {
        printf("Underflow\n");
    } else if (q->Front == q->Rear) {
        printf("Deleted data: %d\n", q->queue[q->Front]);
        q->Front = q->Rear = -1;  // Queue becomes empty
    } else {
        printf("Deleted data: %d\n", q->queue[q->Front]);
        q->Front++;
    }
}

// Peek operation (shows the front element)
void peek(str *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("Front data is: %d\n", q->queue[q->Front]);
    }
}

// Display all elements of the queue
void display(str *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        for (int i = q->Front; i <= q->Rear; i++) {
            printf("Data: %d\n", q->queue[i]);
        }
    }
}

int main() {
    str q;
    q.Front = q.Rear = -1;  // Initialize queue indices

    int data, choice;
 printf("\nQueue Operations Menu:\n");
        printf("1. Enqueue\n2. Dequeue\n3. Check if Empty\n4. Check if Full\n5. Peek\n6. Display\n0. Exit\n");
    do {
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            Enqueue(data, &q);
            break;

        case 2:
            Dequeue(&q);
            break;

        case 3:
            if (isEmpty(&q))
                printf("Queue is empty\n");
            else
                printf("Queue is not empty\n");
            break;

        case 4:
            if (isFull(&q))
                printf("Queue is full\n");
            else
                printf("Queue is not full\n");
            break;

        case 5:
            peek(&q);
            break;

        case 6:
            display(&q);
            break;

        case 0:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice\n");
            break;
        }
    } while (choice != 0);

    return 0;
}
