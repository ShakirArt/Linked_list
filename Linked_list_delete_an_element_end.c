#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node* del_end(struct node *head){
    if(head == NULL){
        printf("Linked List is empty");
    }
    else if(head->next == NULL){
        free(head);
        head = NULL;
    }
    else{
        struct node * temp = head;
        struct node * temp2 = head;
        while(temp->next != NULL){
            temp2 = temp;
            temp= temp->next;
        }
        temp2->next = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
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
    printf("Before deleting - ");
    print_data(head);
    head = del_end(head);
    printf("\nAfter deleting - ");
    print_data(head);
    return 0;
}

