#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,sum=0;
printf("\n enter number");
scanf("%d",&n);
while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
printf("\n %d",sum);
}
if(sum==153)
{
printf("\n palindrom");
}
else
{
printf("\n not");

}
