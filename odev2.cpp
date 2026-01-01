#include <stdio.h>
#include <stdlib.h>
//4.Hafta Araya Ekleme
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
void basaEkle(struct Node **head, int veri) {
    struct Node *newN = (Node *)malloc(sizeof(struct Node));
    newN->data = veri;
    newN->prev = NULL;
    newN->next = *head;

    if (*head != NULL)
        (*head)->prev = newN;

    *head = newN;
}
void arayaEkle(struct Node *onceki, int veri) {
    if (onceki == NULL)
        return;

    struct Node *newN = (Node *)malloc(sizeof(struct Node));
    newN->data = veri;

    newN->next = onceki->next;
    newN->prev = onceki;

    if (onceki->next != NULL)
        onceki->next->prev = newN;

    onceki->next = newN;
}
void yazdir(struct Node *head) {
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node *head = NULL;

    basaEkle(&head, 30);
    basaEkle(&head, 20);
    basaEkle(&head, 10);

    arayaEkle(head->next, 25);
    yazdir(head);

    return 0;
}


