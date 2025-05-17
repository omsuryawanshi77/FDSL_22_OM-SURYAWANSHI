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
    int ch;
    if(rear==n-1&&front>-1){
        printf("rear ===>>>>>>>>>>> 0");
        rear=0;
    }
    scanf("%d",&ch);
    switch(ch){
        case 1:
        if(rear>-1){
        if(rear>=n-1||front>rear){
            printf("xxxxxx--------queue is full----------xxxxxxxxxxx");
            break;
        }
        }
        rear++;
        printf("enter the element =\n");
        scanf("%d",&queue[rear]);
        
        printf("element inserted is ==> %d\n",queue[rear]);
        break;
        case 2:
        if(front==rear){
            printf("queue is empty\n");
            break;
        }
        printf("element %d deleted ",queue[front+1]);
        front++;
        break;
        case 3:
         if(front==rear){
            printf("queue is empty\n");
            break;
        }
        if(rear<front){
             int p=0;
            for(int i=front+1;i<=n-1;i++){
            printf("queue[%d]=%d\n",p,queue[i]);
            p++;
        }
        for(int i=0;i<=rear;i++){
             printf("queue[%d]=%d\n",p,queue[i]);
             p++;
        }
        }
        else{
        int p=0;
        printf("queue element area==\n");
        for(int i=front+1;i<=rear;i++){
            printf("queue[%d]=%d\n",p,queue[i]);
            p++;
        }
        }
        break;
        case 4: quit=0;
        printf("program exited");
        break;
    }
    }while(quit);
    
}
