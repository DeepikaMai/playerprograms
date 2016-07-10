#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
   int k,i,n[10000]={0,};
   cin>>k;
   char a[10000];
   cin>>a;
   
   for(i=0;a[i];i++)
   n[i]=a[i]-48;
   sort(n,n+i);
   k=i-k;
   for(i=0;i<k;i++)
   cout<<n[i];
    return 0;
}

  
