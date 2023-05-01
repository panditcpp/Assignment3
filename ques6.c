#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 number:");
    scanf("%d%d",&a,&b);
    if(a==b)
     printf("a");
     else if(a>b)
     printf("a is greater");
     else
     printf("b is greater");
     return 0;
}