#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct book
{
  char book_name[20];
  int book_id;
  char book_author[20];
};

int main()
{
  struct book s[20];

  int count = 0, size, ex = 0;
  printf("enter the number of book u want record: \n");
  scanf("%d", &size);
  printf("enter the data :\n");

  for (int i = 0; i < size; i++)
  {
    printf("enter the book book_name  :");
    scanf("%s", s[i].book_name);
    printf("enter the book number :");
    scanf("%d", &s[i].book_id);
    printf("enter the book author name :\n");
    scanf("%d", &s[i].book_author);
    count++;
  }
  do
  {
    printf("do want\n 1)insert\n2)delete\n3)modify\n4)display\n5)exist");
    int choice;
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:

      printf("enter position u want to insert :\n  ");
      int n;
      scanf("%d", &n);
      for (int i = count - 1; i >= n; i--)
      {
        // strcpy(s[i+1].book_name,s[i].book_name);
        // s[i+1].book_id=s[i].book_id;
        s[i + 1] = s[i];
      }
      printf("enter the book name  :\n");
      scanf("%s", s[n].book_name);
      printf("enter the book id :\n");
      scanf("%d", &s[n].book_id);
      printf("enter the book author name :\n");
      scanf("%d", &s[n].book_author);

      count++;
      printf("book Detail :\n");
      for (int i = 0; i < count; i++)
      {
        printf("%d\n", i);
        printf("book book_name  %s\n", s[i].book_name);

        printf("book id  %d\n", s[i].book_id);
        printf("book author name %s\n", s[i].book_author);
      }

      break;
    case 2:
      // for deleting
      printf("enter position u want do delete \n");
      int d;
      scanf("%d", &d);
      for (int i = d; i <= count; i++)
      {
        //  strcpy(s[i].book_name,s[i+1].book_name);
        // s[i].book_id=s[i+1].book_id;
        s[i] = s[i + 1];
      }
      count--;
      printf("after modify data :\n");
      for (int i = 0; i < count; i++)
      {
        printf("%d\n", i);
        printf("book book_name  %s\n", s[i].book_name);

        printf("book number  %d\n", s[i].book_id);
        printf("book author name %s\n", s[i].book_author);
      }
      break;
    case 3:
      printf("enter position u want modify :\n");
      int m;
      scanf("%d", &m);
      printf("enter book book_name :\n");
      scanf("%s", s[m].book_name);
      printf("enter the book number \n");
      scanf("%d", &s[m].book_id);
      printf("enter the book author name :\n");
      scanf("%d", &s[m].book_author);
      break;
    case 4:
      for (int i = 0; i < count; i++)
      {
        printf(" book_name  %s\n", s[i].book_name);

        printf("book id  %d\n", s[i].book_id);
        printf("book author name %s\n", s[i].book_author);
      }
      break;

    case 5:
      printf("program is exist\n");
      ex++;
      break;
    }

  } while (ex != 0);

  return 0;
}