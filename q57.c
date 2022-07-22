#include<stdio.h>
int main()
{
  int i,n,a;
  printf("Enter a program: ");
  scanf("%d",&n);
  a=n*2;
  for(i=a;i>=2;i-=2)
  {
    printf("%d ",i);
  }
}