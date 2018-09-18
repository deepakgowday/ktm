#include<stdio.h>
 int main()
{

    int a=0,b=1,s,i,n;
    printf("enter the number");
    scanf("%d",&n);
    printf(" the series");
   for(i=1;i<=n;i++)
   {
     if(i==1)
     {
         s=0;
     }
     else if(i==2)

     {
         s=1;
     }
     else
     {


       s=a*b;

        a=b;
        b=s;
     }
   }
  printf("%d",s);

}
