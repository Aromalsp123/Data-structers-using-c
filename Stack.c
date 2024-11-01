#include <stdio.h>

#define N 100 // Define the size of the queue

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x) {
    if (rear == N - 1) {
        printf("Overflow\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        printf("Queue underflow\n");
    } else if (front == rear) {
        printf("%d\n", queue[front]); // Print the last element being dequeued
        front = rear = -1; // Reset queue when it's empty
    } else {
        printf("%d\n", queue[front]);
        front++;
    }
}

void display() {
    int i;
    if (front == -1 && rear == -1) {
        printf("No elements\n");
    } else {
        for (i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

void peek() {
    if (front == -1 && rear == -1) {
        printf("No elements\n");
    } else {
        printf("%d\n", queue[front]);
    }
}

int main() {
    int choice, value;

    while (1) {
        printf("Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                printf("Dequeued value: ");
                dequeue();
                break;
            case 3:
                printf("Queue elements: ");
                display();
                break;
            case 4:
                printf("Front element: ");
                peek();
                break;
            case 5:
                printf("Exiting...\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
