#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the binary tree
struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to create a new node
struct node* create() {
    int x;
    struct node* new_node = (struct node*)malloc(sizeof(struct node)); // Allocate memory for a new node

    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);
    
    // If the input is -1, return NULL (no node)
    if (x == -1) {
        free(new_node); // Free the allocated memory
        return NULL;
    }

    new_node->data = x; // Assign the data to the new node
    printf("Enter left child of %d:\n", x);
    new_node->left = create(); // Recursively create the left child
    printf("Enter right child of %d:\n", x);
    new_node->right = create(); // Recursively create the right child

    return new_node; // Return the newly created node
}

// Function for in-order traversal
void inOrder(struct node* root) {
    if (root != NULL) {
        inOrder(root->left); // Visit left subtree
        printf("%d ", root->data); // Visit node
        inOrder(root->right); // Visit right subtree
    }
}

// Function for pre-order traversal
void preOrder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data); // Visit node
        preOrder(root->left); // Visit left subtree
        preOrder(root->right); // Visit right subtree
    }
}

// Function for post-order traversal
void postOrder(struct node* root) {
    if (root != NULL) {
        postOrder(root->left); // Visit left subtree
        postOrder(root->right); // Visit right subtree
        printf("%d ", root->data); // Visit node
    }
}

// Function to free memory allocated for the tree
void freeTree(struct node* root) {
    if (root != NULL) {
        freeTree(root->left); // Free left subtree
        freeTree(root->right); // Free right subtree
        free(root); // Free the current node
    }
}

// Main function
int main() {
    struct node* root = create(); // Create the binary tree

    printf("In-order traversal of the tree:\n");
    inOrder(root); // Display the tree using in-order traversal
    printf("\n");

    printf("Pre-order traversal of the tree:\n");
    preOrder(root); // Display the tree using pre-order traversal
    printf("\n");

    printf("Post-order traversal of the tree:\n");
    postOrder(root); // Display the tree using post-order traversal
    printf("\n");

    freeTree(root); // Free the memory allocated for the tree

    return 0;
}
