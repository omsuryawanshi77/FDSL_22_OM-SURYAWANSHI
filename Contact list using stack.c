
#include <stdio.h>

int main() {
    char arr[5][30]; 
    int sp = -1, ex = 1; 
    do {
        printf("\nEnter your choice:\n");
        printf("1) Push\n");
        printf("2) Pop\n");
        printf("3) Display\n");
        printf("4) Exit\n");

        int ch;
        scanf("%d", &ch);
        getchar();

        switch(ch) {
            case 1:
                
                if(sp >= 4) { 
                    printf("Overflow\n");
                    break;
                }

                sp++; 
                printf("Enter the name and mobile number");
                scanf("%[^\n]", arr[sp]);
                getchar();
                break;

            case 2:
                if(sp < 0) {
                    printf("Underflow\n");
                    break;
                }

                printf("Element has been popped: %s\n", arr[sp]);
                sp--; 
                break;

            case 3:
                printf("Displaying stack:\n");
                if(sp < 0) {
                    printf("Stack is empty\n");
                } else {
                    for(int i = sp; i >= 0; i--) {
                        printf("%s\n", arr[i]);
                    }
                }
                break;

            case 4:
                ex = 0;
                printf("Program exited.\n");
                break;
        }

    } while(ex != 0);

    return 0;
}
