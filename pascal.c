#include<stdio.h>
#include<conio.h>
long factorial(int);
int main()
{
int i,n,c;
printf("\n enter the row");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(c=0;c<=(n-i-2);c++)
{
printf"%d",factorial(i)/(factorial(c)*factorial(i-c)));
printf("\n");
return 0;
}
long factorial(int n)
{
int c;
long result=1;
for(c=1;c<=n;c++)
result=result*c;
return(result);
}
