#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};
void append(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (*head == NULL) 
    {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL)
     {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void removeLast(struct Node** head) 
{
    if (*head == NULL)
        return;
    struct Node* temp = *head;
    if (temp->next == NULL) 
    {
        free(temp);
        *head = NULL;
        return;
    }
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);
}
void printList(struct Node* head)
 {
    struct Node* temp = head;
    while (temp != NULL) 
    {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf(" ");
        temp = temp->next;
    }
}
int main()
 {
    int n, value;
    struct Node* head = NULL;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
     {
        scanf("%d", &value);
        append(&head, value);
    }
    removeLast(&head);
    printList(head);
    return 0;
}