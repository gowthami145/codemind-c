#include<stdio.h>
int main()
{
    int n,x,a,b,i;
    scanf("%d%d%d",&n,&a,&b);
    for(i=a;i<=b;i++)
    {
        x=n*i;
    printf("%d x %d = %d
",n,i,x);
    }
}