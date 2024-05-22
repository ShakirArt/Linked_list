#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* insert_end(struct node *newnode, int data){
    struct node * temp =(struct node *) malloc (sizeof(struct node));
    temp->data = data;
    newnode->next = temp;
    temp->next = NULL;
    return temp;
}

void print_data(struct node *head) {
    struct node *ptr = NULL;
    ptr = head;
    if(head == NULL){
        printf("Linked List is empty");
    }
    while(ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

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
    printf("Before inserting - ");
    print_data(head);
    printf("\nAfter inserting - ");
    newnode = insert_end(newnode,90);
    print_data(head);
    return 0;
}





