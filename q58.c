#include<stdio.h>
int main()
{
    int i,a,n;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=i*i;
        printf("%d ",a);
    }
}