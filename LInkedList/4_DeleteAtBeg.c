#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}
void insertAtposition(struct Node **head, int data, int position)
{
    struct Node *newNode = createNode(data);
    //EdgeCase 1:
    if(position == 1)
    {
        newNode -> next = *head;
        *head = newNode;
        return;
    }

    //Edge case 2: Traversal
    struct Node *temp = *head;
    for(int i =1; i<position-1 && temp!=NULL; i++)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        printf("Position out of bound");
        free(newNode);
    }
    newNode -> next = temp -> next;
    temp -> next = newNode;
}
void DeleteAtBeg(struct Node **head)
{
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }
    
    struct Node* temp = *head;  // Temporary pointer to hold current head
    *head = temp->next;         // Move head to next node
    free(temp);                 // Free memory of old head
    printf("\nNode deleted from beginning.\n");
}
 void printList(struct Node **head)
{
    struct Node *temp = *head;
    while(temp != NULL)
    {
        printf("%d ->",temp -> data);
        temp = temp -> next;
    }
    printf("NULL");
}
int main(){
    struct Node *head = NULL;

    insertAtposition(&head,10,1);
    insertAtposition(&head,20,2);
    insertAtposition(&head,15,3);
    insertAtposition(&head,25,4);
    insertAtposition(&head,35,5);
    insertAtposition(&head,30,5);
    insertAtposition(&head,45,4);

    printList(&head);
    DeleteAtBeg(&head);
    printList(&head);
}