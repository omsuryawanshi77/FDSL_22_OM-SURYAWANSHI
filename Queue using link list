#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*front,*rear, *temp,*new,*pre,*node;

void display(){
    int i;
     printf("display the node\n");
     if(front==NULL) printf("link list is empty\n");
     else{
    temp=front;
    i=1;
    while(temp!=NULL){
        
        printf("node %d) %d address : %lx next address : %p\n",i,temp->data,temp,temp->next);
        temp=temp->next;
        i++;
    }
     }
}
int count(){
    temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    front=NULL;
    rear=NULL;
    int q=0;
     
    do{
    printf("\n1)enqueue\n2)dequeue ");
    printf("\n3)display");
    printf("\n4)exit");
    int chh;
    scanf("%d",&chh);
    getchar();
    switch(chh){
    case 1: 
    new=malloc(sizeof(struct node));
     printf("address of new node=%x\n",new);
     printf("enter data\n");
     scanf("%d",&new->data);
    if(front==NULL){
        front=new;
        rear=new;
        new->next=NULL;
    }
    else{
    rear->next=new;
    rear=new;
    new->next=NULL;
    }
    display();
    break;
    
    case 2://delete at first
    temp=front;
    if(front==NULL) printf("link list is empty");
    else if (front->next == NULL) {
        printf("Node deleted: %d\n", front->data);
        free(front);
         front->next= NULL;
         front=NULL;
         rear=NULL;
         break;
    }
    else{
    printf("Node deleted: %d\n", front->data);
    front=temp->next;
    free(temp);
    temp->next =NULL;
    }
    break;
   
    
    case 3:display();
    break;
    case 4:  q=1;
    printf("program end!!!");
    break;
    }
    }while(q!=1);
    return 0;
}
