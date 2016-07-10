
35 lines (34 sloc) 541 Bytes
#include<stdio.h>
#include<string.h>
int fact(int n)
{
return (n<=1)? : n* fact(n-1);
int findsSallerInRight(char* str, int low, int high)
{
int countRight1 = 0,i;
for(i=low+1;i<=high;i++)
if(str[i]<str[low])
++countRight;
return countRight1;
}
int findRank(char* str)
{
int len = strlen(str);
int mul = fact(len);
int rank = 1;
int countRight1;
int i;
for(i=0;i<len;++i)
{
mul/=len-i;
countRight1=findSmallerInRight(str,i,len-1);
}
return rank;
}
int main()
{
char str[] ='string';
printf("%d",findRank(str));
return 0;
