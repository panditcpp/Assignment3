#include<stdio.h>
int main()
{
    int x,count=0;
    printf("enter a number:\n");
    scanf("%d",&x);
    while(x>0)
    {
        count++;
        x=x/10;

    }
    if(count==3)
    printf("given number is 3 digit");
    else
    printf("given digit is not 3 digit");
    return 0;
}