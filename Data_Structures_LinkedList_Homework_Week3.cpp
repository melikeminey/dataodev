//Operations on Linked List

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}node;


void printList(node* head)
{
    node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAtBeginning(node** head, int value) 
{
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(node** head, int value)
{
    node* newNode = (node*)malloc(sizeof(node));
    node* temp = *head;

    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void insertAtPosition(node** head, int value, int pos)
{
    node* temp = *head;

    if (pos == 0) {
        insertAtBeginning(head, value);
        return;
    }

    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("invalid position\n");
        return;
    }
    node* newNode = (node*)malloc(sizeof(node));
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}


void deleteByValue(node** head, int value) 
{
    node* temp = *head;
    node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        *head = temp->next;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Element not found\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

void reverseList(node** head) 
{
    node* prev = NULL;
    node* current = *head;
    node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}


int main() {
    node* head = NULL;

    
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 5);
    insertAtEnd(&head, 20);
    insertAtPosition(&head, 15, 2);

    printf("List: ");
    printList(head);

    deleteByValue(&head, 10);
    printf("before the deleting ");
    printList(head);

    reverseList(&head);
    printf("Reverse form of List ");
    printList(head);

    return 0;
}



















