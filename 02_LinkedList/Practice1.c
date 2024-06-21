#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node* next
};

main() {
    struct node* head;
    head = (struct node*)malloc(sizeof(struct node));
    head->info = 1;

    head->next = (struct node*)malloc(sizeof(struct node));
    head->next->info = 2;

    head->next->next = (struct node*)malloc(sizeof(struct node));
    head->next->next->info = 3;

    printf("First Element: %d\n", head->info);
    printf("First Element: %d\n", head->next->info);
    printf("First Element: %d\n", head->next->next->info);
};
