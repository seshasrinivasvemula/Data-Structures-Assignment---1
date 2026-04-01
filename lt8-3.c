#include <stdio.h>
#include <stdlib.h>
struct Node
 {
    int data;
    struct Node* next;
};
struct Node* createNode(int value)
 {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}
int main()
 {
    int n, value, m;
    if (scanf("%d", &n) != 1) return 0;
    struct Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++) {
        int tempVal;
        scanf("%d", &tempVal);
        struct Node* newNode = createNode(tempVal);
        
        if (head == NULL)
         {
            head = newNode;
            tail = newNode;
            newNode->next = head; 
        } 
        else 
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    scanf("%d", &value);
    scanf("%d", &m);
    struct Node* newNode = createNode(value);
    struct Node* temp = head;
    for (int i = 1; i < m - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    struct Node* current = head;
    for (int i = 0; i < n + 1; i++) 
    {
        printf("%d ", current->data);
        current = current->next;
    }
    return 0;
}