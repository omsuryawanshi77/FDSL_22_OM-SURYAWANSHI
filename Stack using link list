#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head,*top ,*temp,*new,*pre,*node;

void display(){
    int i;
     printf("display the node\n");
     if(head==NULL) printf("link list is empty\n");
     else{
    temp=head;
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
    head=NULL;
    int q=0;
    do{
    printf("\n1)push");
    printf("\n2)pop");
    printf("\n3)display\n4)exit");
    int chh;
    scanf("%d",&chh);
    getchar();
    switch(chh){
        //insert at first 
        case 1: printf("enter data first");
    new=malloc(sizeof(struct node));
    temp=head;
    scanf("%d",&new->data);
    head=new;
    new->next=temp;
    display();
    break;
   
    case 2://delete at first
    temp=head;
    if(head==NULL) printf("link list is empty");
    else if (head->next == NULL) {
        printf("Node deleted: %d\n", head->data);
        free(head);
        head = NULL;
    }
    else{
    printf("node pop");
    head=temp->next;
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
