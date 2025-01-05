#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode =(struct Node*)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = createNode(data);
    //Edge Case 1: 
    if(*head == NULL)
    {
        newNode -> next = *head;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    newNode -> next = temp->next;
    temp -> next = newNode;

}
void printList(struct Node **head)
{
    struct Node *temp = *head;
    while(temp != NULL)
    {
        printf("%d ->",temp->data);
        temp = temp -> next;
    }
    printf("NULL");
}
int main()
{
    struct Node *head = NULL;
    insertAtEnd(&head,10);
    insertAtEnd(&head,20);
    insertAtEnd(&head,30);
    insertAtEnd(&head,10);
    insertAtEnd(&head,10);
    insertAtEnd(&head,50);

    printList(&head);

}