#include <stdio.h>
#include <stdlib.h>
//4.Hafta Sona ekleme, Listeyi Silme
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

void sonaEkle(struct Node **head, int data) {
    struct Node *yeni = (struct Node *)malloc(sizeof(struct Node));
    yeni->data = data;
    yeni->next = NULL;
    yeni->prev = NULL;

    if (*head == NULL) {
        *head = yeni;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
}
    temp->next = yeni;
    yeni->prev = temp;
}

void yazdir(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void ListeyiSil(struct Node *head) {
    if (head == NULL)
        return;

    ListeyiSil(head->next);

    free(head);
}

int main() {
    struct Node *head = NULL;

    sonaEkle(&head, 10);
    sonaEkle(&head, 20);
    sonaEkle(&head, 30);

    yazdir(head);

    ListeyiSil(head);
    head = NULL;
    yazdir(head);
   
    
    return 0;
}

