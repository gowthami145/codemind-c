#include<stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            s+=i;
        }
    }
    if(s>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
}
}