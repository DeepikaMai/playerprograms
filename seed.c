#include<stdio.h>
int main()
{
 int x,y,x1,z=1;
 printf("{enter a number");
 scanf("%d",&x);
 x1=x;
 for(;x>1;)
 {
 z=z*x%10;
 x=x/10;
 }
 z=z*x1;
 printf("seed is %d",z);
return 0;
 }
