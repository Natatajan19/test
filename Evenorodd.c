#include<stdio.h>
int main(){
  int num;
  printf("enter a number");
  scanf("%d",&num);

  if(num%2==0){
    printf("even");
  }
  else {
      printf("odd");
  }

      return 0;
     }