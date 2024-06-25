#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cs50.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the linked list
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

// Function to measure time taken for array access
void benchmarkArray(int size) {
    int* arr = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }

    clock_t start = clock();
    for (int i = 0; i < size; i++) {
        int temp = arr[i];  // Access each element

        // Print progress every 10 seconds
        if ((clock() - start) / CLOCKS_PER_SEC >= 10) {
            double percent = (double)(i + 1) / size * 100;
            printf("Array access: %.2f%% complete\n", percent);
            start = clock();  // Reset start time
        }
    }
    clock_t end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Array access time for %d elements: %f seconds\n", size, time_taken);

    free(arr);
}

// Function to measure time taken for linked list access
void benchmarkLinkedList(int size) {
    struct Node* head = NULL;

    // Measure time taken to create the list
    clock_t start_create = clock();
    for (int i = 0; i < size; i++) {
        insertAtEnd(&head, i);
    }
    clock_t end_create = clock();
    double create_time_taken = ((double)(end_create - start_create)) / CLOCKS_PER_SEC;
    printf("Linked list creation time for %d elements: %f seconds\n", size, create_time_taken);

    // Measure time taken to traverse the list
    clock_t start_traverse = clock();
    struct Node* current = head;
    int count = 0;
    clock_t last_update = start_traverse;  // Track time for updates
    while (current != NULL) {
        int tempData = current->data;  // Access each element
        current = current->next;
        count++;

        // Print progress every 10 seconds
        if ((clock() - last_update) / CLOCKS_PER_SEC >= 10) {
            double percent = (double)count / size * 100;
            printf("Linked list access: %.2f%% complete\n", percent);
            last_update = clock();  // Reset update time
        }
    }
    clock_t end_traverse = clock();
    double traverse_time_taken = ((double)(end_traverse - start_traverse)) / CLOCKS_PER_SEC;
    printf("Linked list access time for %d elements: %f seconds\n", size, traverse_time_taken);

    // Free linked list
    while (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {

    int size = 1000000;  // Number of elements
    for (int i = 1; i <= size; i *= 2) {
        printf("Benchmarking for %i elements\n", i);
        benchmarkArray(i);
        benchmarkLinkedList(i);
        printf("\n");
    }




    return 0;
}
