#include<stdio.h>
 int main()
{

    int a=0,b=1,c,i,n;
    printf("enter the number");
    scanf("%d",&n);
    printf(" the series");
   for(i=0;i<=n;i++)
   {
       c=a+b;
        printf("%d",c);
        a=b;
        b=c;

    }
    return 0;
}
