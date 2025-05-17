#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head, *temp,*new,*pre,*node;

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
    int posi;
    int n;
    int q=0;
      printf("enter no. of node");   
      scanf("%d",&n);
      printf("address of head=%x\n",head);
    for(int i=0;i<n;i++){
    new=malloc(sizeof(struct node));
    printf("address of new node=%x\n",new);
    printf("enter data\n");
    scanf("%d",&new->data);
    if(head==NULL){
        head=new;
        temp=new;
    }
    
    else{
        temp->next=new;
        temp=new;
    }
    new->next=NULL;
  
    }
    printf("data is\n");
    temp=head;
    int i=1;
    while(temp!=NULL){
        
        printf("node %d) address : %p next address : %p\n",i,temp,temp->next);
        temp=temp->next;
        i++;
    }
    printf("size of struct=%ld",sizeof(struct node));
    do{
    printf("\n1)insert at first\n2)insert at last \n3)insert at position\n4)delete at first\n5)delete at last \n6)delete at position ");
    printf("\n7)display");
    printf("\n8)exit");
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
    case 2: printf("enter data (last)");
    new=malloc(sizeof(struct node));
     printf("address of new node=%x\n",new);
     scanf("%d",&new->data);
    temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
   // printf("\n in temp= %d,%lx",temp->data,temp);
    temp->next=new;
    new->next=NULL;
    display();
    break;
    case 3://inser at posi
    
    if(head==NULL){
   printf("enter data (1)");
    new=malloc(sizeof(struct node));
     scanf("%d",&new->data);
     head=new;
     new->next=NULL;
     break;
    }   display();
    printf("enter at which position u want to insert ");
    printf("count === %d",count());
    scanf("%d",&posi);
     if(posi<1||posi>count()){
        printf("invalide option");
        break;
    }
    printf("enter data (%d)",posi);
    new=malloc(sizeof(struct node));
     scanf("%d",&new->data);
     if (posi == 1) {
        new->next = head;
        head = new;
    }
    else{ 
    temp=head;
    pre =head;
    for(int i=1;i<posi;i++)
    {
        pre=temp;
        temp=temp->next;
        
    }
    pre->next=new;
    new->next=temp;
    display();
    }
    break;
    case 4://delete at first
    temp=head;
    if(head==NULL) printf("link list is empty");
    else if (head->next == NULL) {
        printf("Node deleted: %d\n", head->data);
        free(head);
        head = NULL;
    }
    else{
    printf("node 1st deleted");
    head=temp->next;
    free(temp);
    temp->next =NULL;
    }
    break;
    case 5://delete at last
    if(head==NULL) printf("link list is empty");
    else if (head->next == NULL) {
        printf("Node deleted: %d\n", head->data);
        free(head);
        head = NULL;
    }
    else{
        printf("node deleted");
    temp=head;
    pre=head;
    while(temp->next!=NULL){
        pre=temp;
        temp=temp->next;
        
    }
    pre->next=NULL;
    free(temp);
    temp->next=NULL;
    display();
    }
    break;
    case 6://delete at posiu
    
    if(head==NULL) printf("link list empty");
    else{
     display();
    printf("enter at which position u want to delete ");
    //int posi;
    scanf("%d",&posi);
    if(posi<1||posi>count()){
        printf("invalide option");
        break;
    }
    temp=head;
    if(posi==1){
    head=temp->next;
    free(temp);
    temp->next =NULL;
    }
    else{
    temp=head;
    for(int i=1;i<posi;i++)
    {
        pre=temp;
        temp=temp->next;
        
    }
    //printf("address of pre = %lx\naddress od pre next =%lx\naddress of temp= %lx ",pre,pre->next,temp);
    pre->next=temp->next;
    free(temp);
    temp->next=NULL;
    }
    }
    printf("node at %d deleted",posi);
    display();
    break;
    
    case 7:display();
    break;
    case 8:  q=1;
    printf("program end!!!");
    break;
    }
    }while(q!=1);
    return 0;
}
