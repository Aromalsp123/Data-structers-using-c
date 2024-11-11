#include <stdio.h>
#include <stdbool.h>

int top = -1;
int stk[100];

void push(int num, int n) {
    if (top == n - 1) {
        printf("Stack is overflow.\n");
    } else {
        top++;
        stk[top] = num;
        printf("Element %d pushed to stack.\n", num);
    }
}

void pop() {
    if (top == -1) {
        printf("Stack is underflow.\n");
    } else {
        int num = stk[top];
        top--;
        printf("Removed element: %d\n", num);
    }
}

void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stk[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch, n, num;
    printf("Enter the size of the stack: ");
    scanf("%d", &n);

    while (true) {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the element: ");
                scanf("%d", &num);
                push(num, n);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0; // Exit the program
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
