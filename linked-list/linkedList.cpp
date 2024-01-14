#include<iostream>
#include<stdlib.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};
struct node* head=NULL;
void insertAtBeginning(int data){
    struct node *temp, *current;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("nOut of Memory Space:n");
        exit(0);
    }

    temp->data=data;
    temp->next=head;
    head = temp;
}

void insertAtMiddle(struct node* pre_data, int data){
    struct node *temp, *current;
    temp= (struct node *)malloc(sizeof(struct node));

    if(temp==NULL)
    {
        printf("nOut of Memory Space:n");
        exit(0);
    }

    if(pre_data==NULL){
        printf("Previous data can not be null");

    }

    temp->data=data;
    temp->next=pre_data->next;
    pre_data->next=temp;
}


void insertAtEnd(int data){
    struct node *temp, *current;
    temp = (struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("nOut of Memory Space:n");
        exit(0);
    }
    temp->data=data;
    temp->next=NULL;

    if(head==NULL){
        head=temp;
    }else{
        current=head;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=temp;

    }
}


int searchNode(int key){
    struct node* current;
    current=head;
    while(current!=NULL){
        if(current->data==key){
            return 1;
        }
        current=current->next;
    }
    return 0;
}

void deleteFromBeginning(){
    head=head->next;
}

void deleteFromMiddle(int key){
    struct node *current, *pre;
    current=head;
    pre=NULL;

    if(current!=NULL && current->data==key){
        head=head->next;
        free(current);
        return;
    }

    while(current!=NULL && current->data!=key){
        pre=current;
        current=current->next;
    }
    pre->next=current->next;
    free(current);
}

void deleteFromEnd(){
    struct node* current;
    current=head;
    while(current->next->next!=NULL){
        current=current->next;
    }
    current->next=NULL;
}


void displayLinkedList(){
    struct node *current;
    if(head==NULL){
        printf("List is empty/n");
    }
    current=head;
    while(current!=NULL){
        printf("%d\n", current->data);
        current=current->next;
    }

}

int main(){
   insertAtEnd(3);
   insertAtBeginning(2);
   insertAtMiddle(head->next, 4);
   insertAtEnd(5);
   insertAtEnd(7);
   insertAtEnd(11);
   displayLinkedList();

   int item_to_find = 11;
   if(searchNode(item_to_find)){
        printf("%d is found \n", item_to_find);
   }else{
       printf("%d is not found \n", item_to_find);
   }

   deleteFromBeginning();
   printf("After Delete From Beginning \n");
   displayLinkedList();

   deleteFromEnd();
   printf("After Delete From End \n");
   displayLinkedList();

   int delete_item = 4;
   deleteFromMiddle(delete_item);
   printf("After deleting %d \n", delete_item);
   displayLinkedList();

}
