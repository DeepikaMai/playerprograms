#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,sum;
printf("\n enter number");
scanf("%d",&n);
rem=rem%10;
n=n/10;
sum=rem+n;
printf("%d",sum);
}
