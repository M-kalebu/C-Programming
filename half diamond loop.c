#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    if(n>=3&&n<=100){
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(k=n-1;k>0;k--)
    {
        for(l=k;l>0;l--)
        {
            printf("*");
        }
        printf("\n");
    }}
    else
    {
        printf("The pattern is not possible");
    }
}

