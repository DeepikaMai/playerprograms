#include<stdio.h>
#include<conio.h>
void main()
{
long num,deci_num,rem,base=1,bi=0;
printf("\n enter deci");
scanf("%d",&num);
deci_num=num;
while(num>0)
{rem=num%2;
bi=bi+rem*base;
num=num/2;
base=base*10;
}
printf("\n binary%d",binary);
}
