// queue 
#include<stdio.h>
int main ()
{
    int front=-1,rear=-1,quit=1;
    int n=12,queue[n];
    printf("enter the size of queue");
    scanf("%d",&n);
    do{
    printf("\n 1)insert(enqueue) \n2)delete(dequeue)\n3)display\n4)exit\nenter=>");
    printf("\nfront==%d \n rear==%d \nenter=>",front,rear);
    int ch;
    scanf("%d",&ch);
    switch(ch){
        case 1:
       
        if(rear==-1&&front==-1){
             int element;
        printf("enter the element =\n");
        scanf("%d",&element);
          rear=0;
          front=0;
          queue[rear]=element;
          break;
        }
        if(((rear+1)%n)==front) {
            printf("queue is full");
            break;
            
        }
        else{
        rear=(rear+1)%n;
         printf("enter the element =\n");
        scanf("%d",&queue[rear]);
        printf("element inserted is ==> %d\n",queue[rear]);
        break;
        }
        break;
        //dequeue
        case 2:
         if(rear==-1&&front==-1){
            printf("queue is empty\n");
            break;
        }
        if(rear==front){
            printf("element %d deleted front===%d",queue[front],front);
            front=-1;
            rear=-1;
            break;
        }
        else{
             printf("element %d deleted front,rear===%d %d",queue[front],front,rear);
            front=(front+1)%n;
       
        break;
        }
        case 3:
         if(rear==-1&&front==-1){
            printf("queue is empty\n");
            break;
        }
        /*
        if(rear<front){
            
        for(int i=front;i<=n-1;i++){
             printf("queue[%d]=%d\n",i,queue[i]);
             
        }
        for(int i=0;i<=rear;i++){
             printf("queue[%d]=%d\n",i,queue[i]);
             
        }
        }
        else{
        int p=0;
        printf("queue element area==\n");
        for(int i=front;i<=rear;i++){
            printf("queue[%d]=%d\n",p,queue[i]);
            p++;
        }
        }
        */
        int i;
        for( i=front;i!=rear;i=(i+1)%n){
            printf("queue[%d]=%d",i,queue[i]);
        }
        printf("queue[%d]=%d",i,queue[rear]);
        break;
        case 4: quit=0;
        printf("program exited");
        break;
    }
    }while(quit);
    
}
