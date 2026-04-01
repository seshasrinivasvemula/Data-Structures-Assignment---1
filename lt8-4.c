#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int id;
    struct Node* next;
};
struct Node* createNode(int id)
 {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->id = id;
    newNode->next = NULL;
    return newNode;
}
void removeLast(struct Node** head) 
{
    if (*head == NULL) return;
    struct Node* curr = *head;
        if (curr->next == *head) 
        {
        free(curr);
        *head = NULL;
        return;
    }
    struct Node* prev = NULL;
    while (curr->next != *head) 
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = *head;
    free(curr);
}
void display(struct Node* head) 
{
    if (head == NULL) return;
    struct Node* temp = head;
    do {
        printf("%d ", temp->id);
        temp = temp->next;
    } while (temp != head);
    printf("\n");
}
int main()
 {
    int n;
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    struct Node *head = NULL, *tail = NULL;
    for (int i = 0; i < n; i++)
     {
        int id;
        scanf("%d", &id);
        struct Node* newNode = createNode(id);
        if (head == NULL)
         {
            head = newNode;
            newNode->next = head;
            tail = newNode;
        } 
        else 
        {
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
    }
    removeLast(&head);
    display(head);
    return 0;
}