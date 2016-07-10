#include<stdio.h>
int main()
{
int array[100],pos,c,n,value;
printf("\n enter the num of elements in an array");
scanf("%d",&n);
printf("\n enter %d elements \n",n);
for(c=0;c<n;c++)
{
scanf("%d",&array[c]);
printf("\n enter the value tp insert");
scanf("%d",&value);
for(c=n-1;c>=position-1;c--)
array[c+1]=arr[c];
array[position-1]=value;
printf("resultant array is\n");
for(c=0;c printf("%d\n",array[c]);
printf("\n enter the location to do delete");
scanf("%d",&position);
if(position>=n-1)
{
printf("deletion not possible");
else{
for(c=0;c<=n-1;c++)
array[c]=array[c+1];
printf("\n resultant array");
for(c=0;c<n-1;c++)
{
printf("%d\n"array[c]);
}
return 0;
}
