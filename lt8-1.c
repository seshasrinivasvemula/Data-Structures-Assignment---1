#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node*next;
};
struct Node* head =NULL;
void insertFront(int value) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = head;
    if (head != NULL) 
    {
        head->prev = newNode;
    }
    head = newNode;
}
void printList()
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL)
            printf(" ");
        temp = temp->next;
    }
    printf("\n");
}
int main()
{
    int N;
    scanf("%d", &N);

    int id;
    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &id);
        insertFront(id);
        printf("Node Inserted\n");
        printList();
    }
    return 0;
}