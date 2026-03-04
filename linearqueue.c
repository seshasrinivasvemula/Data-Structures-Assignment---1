#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front = -1, rear = -1;
void enqueue() {
    int val;
    if (rear == MAX - 1) {
        printf("\nQueue Overflow! Cannot add more elements.\n");
    } else {
        if (front == -1) front = 0;
        printf("Enter element: ");
        scanf("%d", &val);
        rear++;
        queue[rear] = val;
    }
}
void dequeue() {
    if (front == -1 || front > rear) {
        printf("\n Queue Underflow \n");
    } else {
        printf("\n Dequeued: %d\n", queue[front]);
        front++;
        if (front > rear) front = rear = -1; 
    }
}
void find() {
    int target, found = 0;
    if (front == -1) {
        printf("\n Queue is empty\n");
        return;
    }
    printf("Enter element to find: ");
    scanf("%d", &target);
    for (int i = front; i <= rear; i++) {
        if (queue[i] == target) {
            printf("Element %d found at index %d\n", target, i);
            found = 1;
            break;
        }
    }
    if (!found) printf("Element not found.\n");
}
int main() {
    int choice;
    while (1) {
        printf("\n Linear Queue Menu ");
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