#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,rev;
printf("\n enter number");
scanf("%d",&n);
rev=0;
while(n>0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf("\n reverse%d",rev);
}
