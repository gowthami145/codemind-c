#include<stdio.h>
int sum(int,int );
int diff(int,int );
int pro (int,int );
int quo (int,int );
int rem (int,int );
int main()
{
int a,b;
scanf("%d%d",&a,&b);
int s=sum(a,b);
printf ("Sum:%d
",s);
int sub=diff(a,b);
printf ("Difference:%d
",sub);
int m=pro(a,b);
printf ("Product:%d
",m);
int q=quo(a,b);
printf ("Quotient:%d
",q);
int r=rem(a,b);
printf ("Remainder:%d
",r);
}
int sum(int a, int b )
{
    int c=a+b;
    return c;
}
int diff(int a, int b)
{
    int d=a-b;
    return d;
}
int pro(int a, int b )
{
    int e=a*b;
    return e;
}
int quo(int a, int b )
{
    int f=a/b;
    return f;
}
int rem(int a, int b )
{
    int g=a%b;
    return g;
}