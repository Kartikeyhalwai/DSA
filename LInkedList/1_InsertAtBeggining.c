#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void InsertAtBeggining(struct Node **head, int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data = data;
    temp->next = NULL;

    if(*head == NULL)
    {
        *head = temp;
    }
    
    else{
        temp->next = *head;
        *head = temp;
    }
}
void InsertAtEnd(struct Node **head, int data)
{
    struct Node *current = *head;
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));

    temp -> data = data;
    temp -> next = NULL;

    if(*head == NULL)
    {
        *head = temp;
    }
    else{
        while(current -> next != NULL)
        {
            current = current -> next;
        }

        current -> next = temp;
    }
}
void printList(struct Node *head)
{
    struct Node *current = head;

    while(current!= NULL)
    {
        printf("%d -> ",current->data);
        current = current-> next;
    }
    printf("NULL \n");
}

void main(){
    struct Node *head = NULL;
    InsertAtBeggining(&head, 10);
    InsertAtBeggining(&head, 20);
    InsertAtBeggining(&head, 30);

    printf("Linked List : ");
    printList(head);

    InsertAtEnd(&head,40);
    InsertAtEnd(&head,50);
    InsertAtEnd(&head,60);

    printf("Linked List : ");
    printList(head);
}