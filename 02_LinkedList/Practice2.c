#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node * next;
};

void traverseLL(struct node *ptr){
    while (ptr != NULL){
    printf("Element: %d\n",ptr->info);
    ptr = ptr->next;
    }
}

int main() {
    struct node * head;
    struct node * second;
    struct node * third;

    head = (struct node *)malloc(sizeof(struct node));
    head->info = 1;
    head->next = second;

    second = (struct node *)malloc(sizeof(struct node));
    second->info = 2;
    second->next = third;

    third = (struct node *)malloc(sizeof(struct node));
    third->info = 3;
    third->next = NULL;

    // printf("First Element: %d\n", head->info);
    // printf("Second Element: %d\n", second->info);
    // printf("Third Element: %d\n", third->info);

    traverseLL(head);

     return 0;
};