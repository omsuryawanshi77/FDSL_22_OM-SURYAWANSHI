#include<stdio.h>

int main(){
  int size=12, s, count=0;
  int a[size], b[size];
  
  
  printf("enter size of array :\n");
  scanf("%d", &size);
 
  printf("enter the array element :\n");
  for(int i=0; i<size; i++){
    scanf("%d", &a[i]);
  }
  
  // enter the element to search for
  printf("enter the element you want to search\n");
  scanf("%d", &s);
  
  // Search for the element in the array
  for(int i=0; i<size; i++){
    if(a[i] == s){
      b[count] = i; // Store the index of the found element
      count++;
    }
  }
  
  // Print the results of the search
  if(count > 0){
    printf("%d is present %d times\n at location =[", s, count);
    for(int i=0; i<count; i++){
      printf(" %d,",b[i]);
    }
    printf("]\n");
  }
  else {
    printf("%d is not present\n", s);
  }
  
  return 0;
}