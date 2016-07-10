#include<stdio.h>
int main()
{
int i=0,n,k,j,l,temp,p=0,o,a[20];
printf("Enter the value");  //input 
scanf("%d",&n);
printf("\nEnter the K value");//k value
scanf("%d",&k);
while(n>0)
{
a[i]=n%10;

n=n/10;
i++;
}


for(j=0;j<i;j++)
{
for(l=j+1;l<i;l++)
{
if(a[j]>a[l])
{
temp=a[j];
a[j]=a[l];
a[l]=temp;
}}}

for(j=0;j<i;j++)
{
p=p*10+a[j];
}

o=p;
for(j=0;j<k;j++)
{
	o=o/10;
}
printf("\n%d",o);
return 0;
}

    Status API Training Shop Blog About 

