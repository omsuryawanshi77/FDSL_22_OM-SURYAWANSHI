#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book {
    char book_name[20];
    int book_id;
    char book_author[20];
};

int main() {
    struct book s[20];
    int count = 0, size, ex = 0;

    printf("Enter the number of books you want to record: \n");
    scanf("%d", &size);
    printf("Enter the data:\n");

    for (int i = 0; i < size; i++) {
        printf("Enter the book name: ");
        scanf("%s", s[i].book_name);
        printf("Enter the book ID: ");
        scanf("%d", &s[i].book_id);
        printf("Enter the book author name: ");
        scanf(" %s", s[i].book_author); 
        count++;
    }

    do {
        printf("\nDo you want to:\n 1) Insert\n 2) Delete\n 3) Modify\n 4) Display\n 5) Exit\n");
        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                printf("Enter the position you want to insert: ");
                int n;
                scanf("%d", &n);

                if (n < 0 || n > count) {
                    printf("Invalid position!\n");
                    break;
                }

                for (int i = count - 1; i >= n; i--) {
                    s[i + 1] = s[i];
                }

                printf("Enter the book name: ");
                scanf("%s", s[n].book_name);
                printf("Enter the book ID: ");
                scanf("%d", &s[n].book_id);
                printf("Enter the book author name: ");
                scanf(" %s", s[n].book_author); 

                count++;

                printf("Book Details:\n");
                for (int i = 0; i < count; i++) {
                    printf("Index: %d\n", i);
                    printf("Book Name: %s\n", s[i].book_name);
                    printf("Book ID: %d\n", s[i].book_id);
                    printf("Book Author: %s\n", s[i].book_author);
                }
                break;
            }
            case 2: {
                printf("Enter the position you want to delete: ");
                int d;
                scanf("%d", &d);

                if (d < 0 || d >= count) {
                    printf("Invalid position!\n");
                    break;
                }

                for (int i = d; i < count - 1; i++) {
                    s[i] = s[i + 1];
                }

                count--;

                printf("After deletion:\n");
                for (int i = 0; i < count; i++) {
                    printf("Index: %d\n", i);
                    printf("Book Name: %s\n", s[i].book_name);
                    printf("Book ID: %d\n", s[i].book_id);
                    printf("Book Author: %s\n", s[i].book_author);
                }
                break;
            }
            case 3: {
                printf("Enter the position you want to modify: ");
                int m;
                scanf("%d", &m);

                if (m < 0 || m >= count) {
                    printf("Invalid position!\n");
                    break;
                }

                printf("Enter the book name: ");
                scanf("%s", s[m].book_name);
                printf("Enter the book ID: ");
                scanf("%d", &s[m].book_id);
                printf("Enter the book author name: ");
                scanf(" %s", s[m].book_author); 
                break;
            }
            case 4: {
                printf("Book Details:\n");
                for (int i = 0; i < count; i++) {
                    printf("Index: %d\n", i);
                    printf("Book Name: %s\n", s[i].book_name);
                    printf("Book ID: %d\n", s[i].book_id);
                    printf("Book Author: %s\n", s[i].book_author);
                }
                break;
            }
            case 5: {
                printf("Program exiting.\n");
                ex = 1; 
                break;
            }
            default:
                printf("Invalid choice!\n");
                break;
        }
    } while (ex == 0);

    return 0;
}
