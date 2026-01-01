#include <stdio.h>
#include <stdlib.h>
//4.Hafta Linked Listte Sýralama
typedef struct Node {
    int data;
    struct Node *next;
} Node;

void bubbleSort(Node *head) {
    Node *i, *j;
    int temp;

    if (head == NULL)
        return;

    for (i = head; i != NULL; i = i->next) {
        for (j = head; j->next != NULL; j = j->next) {
            if (j->data > j->next->data) {
                temp = j->data;
                j->data = j->next->data;
                j->next->data = temp;
            }
        }
    }
}

void yazdir(Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;

    Node *n1 = (Node *)malloc(sizeof(Node));
    Node *n2 = (Node *)malloc(sizeof(Node));
    Node *n3 = (Node *)malloc(sizeof(Node));

    n1->data = 30; n1->next = n2;
    n2->data = 10; n2->next = n3;
    n3->data = 20; n3->next = NULL;

    head = n1;

    bubbleSort(head);
    yazdir(head);

    return 0;
}


