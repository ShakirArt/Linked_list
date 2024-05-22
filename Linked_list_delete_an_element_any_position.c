#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void del_pos(struct node *head, int pos){
    struct node * temp = head;
    struct node * temp2 = head;
    while(pos != 1){
        temp2 = temp;
        temp= temp->next;
        pos--;
    }
    temp2->next = temp->next;
    free(temp);
    temp = NULL;
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
    del_pos(head,3);
    printf("\nAfter deleting - ");
    print_data(head);
    return 0;
}
