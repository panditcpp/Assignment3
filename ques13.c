#include<stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x%3==0 && x%7==0)
    printf("number is divisible by 3 and 7");
    else
    printf("not divisible");
    return 0;
}




