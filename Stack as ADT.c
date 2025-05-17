#include<stdio.h>
int main(){
    int n=12,stack[n];
    int sp=-1,ex=1;
   printf("enter the size of stack");
    do{
         printf("enter u choose 1)push\n2)pop\n3)display\n4)Exit\n ");
    int ch;
    scanf("%d",&ch);
    switch(ch){
        case 1 :
        if(sp>8) {
            printf("overflow\n");
            break;
        }
        
        sp++;
          printf("enter the element");
          scanf("%d",&stack[sp]);
          printf(" element %d has push",stack[sp]);
          break;
        case 2:
        if(sp<0) {
            printf("underflow\n");
            break;
        }
       printf("element %d  has been pop",stack[sp]);
        sp--;
        break;
        case 3:
        if(sp<0) {
            printf("stack is empty\n");
            break;
        }
        printf("display\n");
        for(int i=sp;i>=0;i--){
            printf("stack[%d]=%d \n",i,stack[i]);
            
        }
        printf("\n");
        break;
        case 4: ex=0;
        printf("program exit");
        
    }
    
    
    }while(ex!=0);
}
