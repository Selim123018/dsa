#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createBinaryTree(struct node *root, int value){
    struct node *current, *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=value;
    temp->right=NULL;
    temp->left=NULL;

    if(root==NULL){
        root=temp;
    }else{
        current=root;
        if(current->data<value){
            createBinaryTree(current->right, value);
        }else if(current->data>value){
            createBinaryTree(current->left, value);
        }
        return root;
    }
}

int main(){
    struct node *root=NULL;
    createBinaryTree(root, 7);
    createBinaryTree(root, 11);
    createBinaryTree(root, 13);
    createBinaryTree(root, 17);
    createBinaryTree(root, 23);
}
