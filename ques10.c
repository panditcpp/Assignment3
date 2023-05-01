#include<stdio.h>
int main()
{
    int cp,sp;
    float profit=0.0,loss=0.0;
     printf("enter the cp and sp:\n");
     scanf("%d %d",&cp,&sp);
     if(cp>sp)
     {
        loss=((cp-sp)*100)/cp;
        printf("loss is %.1f percent",loss);

     }
     else{
        profit=((sp-cp)*100)/cp;
        printf("profit is %.1f percent",profit);
 
     }
     return 0;
}
