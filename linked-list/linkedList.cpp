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
   insertAtBeginning(2);
   insertAtBeginning(3);
   insertAtBeginning(5);
   insertAtBeginning(7);
   insertAtBeginning(11);
   displayLinkedList();
}
