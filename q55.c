#include<stdio.h>
int  main()
{
    int i,n,a;
    printf("Enter a number:");
    scanf("%d",&n);
    a=n*2;
    for(i=a;i>=1;i-=2)
    {
        printf("%d ",i);
    }
}