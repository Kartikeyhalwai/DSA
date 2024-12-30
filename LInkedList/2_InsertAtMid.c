#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node* createNode(int data)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode-> next = NULL;
    return newNode;
}
void insertAtMid(struct Node **head, int data, int position)
{
    struct Node *newNode = createNode(data);
//Handling Edge Case 1: position == 1;
    if(position == 1)
    {
        newNode -> next = *head;
        *head = newNode;
        return;
    }

//Handling Edge Case 2: position other than 1; Traversing the list...
    struct Node *temp  = *head;
    for(int i = 1; i< position-1 && temp != NULL; i++)
    {
        temp = temp -> next;
    }
//Handling Edge case 3: Position out of bound;
    if(temp == NULL){
        printf("Position is Out Of Bound \n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void printList(struct Node* head)
{
    struct Node *temp = head;
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp = temp->next;
    }
    printf("NULL");
}
int main()
{
    struct Node *head =  NULL;
    insertAtMid(&head, 10, 1);
    insertAtMid(&head, 20, 2);
    insertAtMid(&head, 30, 2);
    insertAtMid(&head, 40, 4);
    printList(head);
}