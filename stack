#include <stdio.h>
#include <stdbool.h>

int top = -1;
int stk[100];

int main() {
    int ch, Max_Size,num;
    printf("Enter the size of the stack ");
    scanf("%d", &Max_Size);

    while (true) {
        printf("1.PUSH\n2.POP\n3.DISPLAY\n4.IS THE STACK FULL\n5.IS THE STACK EMPTY\n6.EXIT\n");
        printf("Enter your choice : ");
        scanf("%d", &ch);
        printf("\n");

        switch (ch) {
            case 1:
                if (top == Max_Size - 1) {
                    printf("Stack Overflow");
                } else {

                    printf("Enter the element ");
                    scanf("%d", &num);
                    top++;
                    stk[top] = num;
                }
                break;
            case 2:
                if (top == -1) {
                    printf("Stack Underflow");
                } else {
                    num = stk[top];
                    top--;
                    printf("Element successfully removed from the stack is %d", num);
                }
                break;
            case 3:
                printf("The element at the top of the stack is %d",stk[top]);
                break;
            case 4:
                if (top == Max_Size - 1) {
                    printf("Stack is full");
                } else {
                    printf("Stack is not full");
                }
                break;
            case 5:
                if (top == -1) {
                    printf("Stack is empty");
                } else {
                    printf("Stack is not empty");
                }
                break;
            case 6:
                printf("Exiting\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
