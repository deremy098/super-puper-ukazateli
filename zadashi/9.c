#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;
int main() {
    Node *head = NULL, *tail = NULL;
    for (int i = 1; i <= 4; i++) {
        Node *n = malloc(sizeof(Node));
        n->data = i;
        n->next = NULL;
        if (!head) head = tail = n;
        else tail = tail->next = n;
    }
    for (Node *c = head; c; c = c->next)
        printf("%d ", c->data);
    while (head) {
        Node *t = head;
        head = head->next;
        free(t);
    }
}