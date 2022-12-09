#include<stdio.h>
int years(int );
int weeks(int );
int main()
{
    int days;
    scanf("%d",&days);
    int y=years(days);
    printf("%d
",y);
    int w=weeks(days);
    printf("%d
",w);
}
int years(int days)
{
    int x=days/365;
    return x;
}
int weeks(int days)
{
    int z=(days%365)/7;
    return z;
}