#include<stdio.h>
int main()
{
    char x;
    printf("enter a character:\n");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
    printf("upper case");
    else
    printf("lower case");
    return 0;
}