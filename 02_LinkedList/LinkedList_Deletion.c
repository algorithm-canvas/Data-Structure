#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr){
    while(ptr != NULL) {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}

// Deleting the first element from linkedlist
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// Deleting the between element from linkedlist
struct Node * deleteBetween(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

// Deleting the Last element from linkedlist
struct Node * deleteLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}

int main(){
struct Node * head;
    struct Node * second;
    struct Node * third;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 9;
    second->next = third;

    // Terminate the list at the third node
    third->data = 11;
    third->next = NULL;

    linkedListTraversal(head);

    // head = deleteFirst(head);
    // head = deleteBetween(head,2);
    head = deleteLast(head);
    linkedListTraversal(head);
    return 0;
}