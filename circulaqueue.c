#include <stdio.h>
#include <stdlib.h>

#define N 5 // Define the size of the queue

int queue[N];
int front = -1;
int rear = -1;

// Function to add an element to the queue
void enqueue(int x) {
    // Check if the queue is full
    if ((rear + 1) % N == front) {
        printf("Queue is full\n");
    } else {
        // If the queue is empty
        if (front == -1 && rear == -1) {
            front = rear = 0; // Initialize front and rear
        } else {
            rear = (rear + 1) % N; // Move rear to the next position
        }
        queue[rear] = x; // Add the new element
        printf("Enqueued: %d\n", x);
    }
}

// Function to remove an element from the queue
void dequeue() {
    // Check if the queue is empty
    if (front == -1 && rear == -1) {
        printf("Queue is empty (underflow)\n");
    } else {
        printf("Dequeued: %d\n", queue[front]); // Print the dequeued element
        // If the queue has only one element
        if (front == rear) {
            front = rear = -1; // Reset the queue
        } else {
            front = (front + 1) % N; // Move front to the next position
        }
    }
}

// Function to display the queue
void display() {
    if (front == -1 && rear == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break; // Stop when we reach the rear
        i = (i + 1) % N; // Move to the next position
    }
    printf("\n");
}

// Main function to demonstrate the circular queue
int main() {
    int choice, value;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
