#include<stdio.h>
int main()
{
int i,sum=1,n;
printf("enter the numbers");

scanf("%d",&n);
for(i=1;i<=n;i++)
{
    sum=sum+i;
}
printf("%d",sum);

}
