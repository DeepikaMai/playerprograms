# playerprograms
#include<stdio.h>
#include<conio.h>
void main()
{
int i,fact,n;
printf("\n enter the number");
scanf("%d",&n);
fact=1;
for(i=1;i<=n;i++)
{
fact=fact*i;
}
printf("factorial %d",fact);
}
