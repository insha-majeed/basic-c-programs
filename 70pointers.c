// Demonstrate use of pointers in self-referential structures

#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node n1, n2, n3;
    struct Node *head;
    n1.data = 10;
    n2.data = 20;
    n3.data = 30;
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;
    head = &n1;
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
    return 0;
}