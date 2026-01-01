#include <stdio.h>
#include <stdlib.h>
//4.Hafta Çembersel Listede Sýralama
typedef struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

void bubbleSortCircularList(Node *head) {
    Node *i, *j;
    int temp;

    if (head == NULL)
        return;

    for (i = head; i->next != head; i = i->next) {
        j = head;

        do {
            if (j->data > j->next->data) {
                temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
            j = j->next;
        } while (j->next != head);
    }
}

void yazdir(Node *head) {
    Node *temp = head;

    if (head == NULL)
        return;

    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(head)\n");
}

int main() {
    Node *head = NULL;

    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *n3 = (Node *)malloc(sizeof(Node));

    n1->data = 30;
    n2->data = 10;
    n3->data = 20;

    n1->next = n2; n2->prev = n1;
    n2->next = n3; n3->prev = n2;
    n3->next = n1; n1->prev = n3;

    head = n1;

    bubbleSortCircularList(head);
    yazdir(head);

    return 0;
}

