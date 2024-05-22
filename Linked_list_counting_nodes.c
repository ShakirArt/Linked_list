#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *head, *newnode;
    head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> next = 0;
    printf("1st - %d\n",head -> data);
    newnode = malloc(sizeof(struct node));
    newnode -> data = 80;
    newnode -> next = 0;
    head -> next = newnode;
    printf("2nd - %d\n",newnode -> data);
    newnode = malloc(sizeof(struct node));
    newnode -> data = 78;
    newnode -> next = 0;
    head -> next -> next = newnode;
    printf("3rd - %d\n",newnode -> data);
    newnode = malloc(sizeof(struct node));
    newnode -> data = 7;
    newnode -> next = 0;
    head -> next -> next -> next = newnode;
    printf("4th - %d\n",newnode -> data);
    count_of_nodes(head);
    return 0;
}

void count_of_nodes (struct node *head) {
    int count = 0;
    if(head == NULL) {
        printf("Linked List is empty");
    }

    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    printf("Count of nodes %d\n", count);
}




