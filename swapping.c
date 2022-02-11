#include<stdio.h>
int main()
{
  int num1,num2,a;
  printf("Enter value of num1 and num2");
  scanf("%d %d",&num1,&num2);
  a=num1;
  num1=num2;
  num2=a;
  printf("after swapping num1 and num2: %d %d",num1,num2);
}
