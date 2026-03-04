#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int cqueue[MAX];
int front = -1, rear = -1;
void enqueue() {
    int val;
    if ((rear + 1) % MAX == front) {
        printf("\nQueue is Full (Circular Overflow)!\n");
    } else {
        printf("Enter element: ");
        scanf("%d", &val);
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        cqueue[rear] = val;
        printf("Inserted %d\n", val);
    }
}
void dequeue() {
    if (front == -1) {
        printf("\nQueue is Empty!\n");
    } else {
        printf("\nDequeued: %d\n", cqueue[front]);
        if (front == rear) {
            front = rear = -1; // Queue becomes empty
        } else {
            front = (front + 1) % MAX;
        }
    }
}
void find() {
    int target, i;
    if (front == -1) {
        printf("\nQueue is empty.\n");
        return;
    }
    printf("Enter element to find: ");
    scanf("%d", &target);
    i = front;
    while (1) {
        if (cqueue[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            return;
        }
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("Element not found\n");
}
int main() {
    int choice;
    while (1) {
        printf("\n Circular Queue Menu ");
        printf("\n1. Enqueue\n2. Dequeue\n3. Find\n4. Exit\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: enqueue(); break;
            case 2: dequeue(); break;
            case 3: find(); break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}