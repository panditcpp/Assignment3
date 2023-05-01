#include<stdio.h>
int main()
{
    char x;
    printf("enter a character:\n");
    scanf("%c",&x);
    if(x>='A' && x<='Z')
    printf("upper case");
    else if(x>='a' && x<='z')
    printf("lower case");
    else if(x>=0 && x<=9)
    printf("digit");
    else
    printf("special character");
    return 0;
}