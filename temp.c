#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *next;
};

struct node *root=NULL;
struct node *end=NULL;

void insert(int a) {
   struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=a;
   newnode->next=NULL;

   if(root==NULL) {
   root=newnode;
   end=newnode;
   }
   else {
     end->next=newnode;
     end=newnode;
   }
}
void display() {
    struct node *temp=root;
    while(temp!=NULL){
       printf("%d",temp->data);
       temp=temp->next;
    }
}
int main() {
    insert(10);
    insert(20);
    display();
    return 0;
}
