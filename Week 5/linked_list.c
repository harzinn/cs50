#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
typedef struct node
{
    int number;          // Data stored in the node
    struct node *next;   // Pointer to the next node
} node;

int main(int argc, char *argv[])
{
    // Initialize the list as empty
    node *list = NULL;

    // Loop through command-line arguments starting from index 1
    // (argv[0] is the program name)
    for (int i = 1; i < argc; i++)
    {
        // Convert the current argument from string to integer
        int number = atoi(argv[i]);

        // Allocate memory for a new node
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            // TODO: Memory Cleanup
        }

        // Initialize the new node with data
        n->number = number;

        // Point the new node's next to the current head of the list
        n->next = list;

        // Update the head of the list to the new node
        list = n;
    }

    // Traverse the list and print each node's number
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

   // TODO: Memory Cleanup

    // Return success status
    return 0;
}