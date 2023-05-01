#include<stdio.h>
int main()
{
    int p,c,b,m,e;
    printf("enter marks of 5 subject:\n");
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&e);
    if( p>33 && c>33 &&  b>33 &&  m>33 &&  e>33 )
    printf("student is passed");
    else
    printf("student is failed");
    return 0;
}