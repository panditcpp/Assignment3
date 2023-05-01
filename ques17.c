#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==0||b==0||c==0)
    printf("triangle is not possible:");
  else if((a<=b+c) || (b<=a+c) || (c<=a+b))
     printf("triangle is possible:");
    else
    printf("triangle is not possible:");
    return 0;
}