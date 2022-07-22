#include<stdio.h>
int main()
{
    int i,n,a;
    printf("Enter a number");
    scanf("%d",&n);
    a=n*2;
    for(i=1;i<=a;i+=2)
    {
        printf("%d ",i);
    }
}