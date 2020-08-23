#include<bits/stdc++.h>
using namespace std;
int digit(int n)
{
 int s=0;
      while(n>=1)
    {
        int r=n%10;
        s=s+r;
        n=n/10;

    }
    return s;
    }
int ar[36];
int main()
{
int n,N=1;
cin>>n;
for(int i=0;i<n/2;i++)
N=N*10;
  for(int i=0;i<N;i=i+1)
    {
int     d=digit(i);

     ar[d]++;



    }
int ans=0;
  for(int i=0;i<N;i=i+1)
    {
   int  d=digit(i);
   ans=ans+ar[d];
    }
cout<<ans<<endl;


}


/*
this problem means find out the number which range n/2
how many times same summation is occur
i(1-99)
sum=1 = 2 (1=1;1+0=1)
sum 2=...(2=2;1+1=2;2+0=2)
...
max sum=36 when n=8;
so max index=36
our sum count array size 36 is enough
cout<<"d = "<<d<<" "<<ar[d]<<endl;

bool digit(int n)
{
    int a[4],j=0,s1=0,s2=0;
    int t=n;
      while(n>=1)
    {
        int r=n%10;
        a[j]=r;
        j++;
        n=n/10;


    }
int mid=(j-1)/2;
for(int i=0;i<=mid;i++)
{
    s1=s1+a[i];
}
for(int i=mid+1;i<j;i++)
{
    s2=s2+a[i];
}
if(s1==s2)
    return t;
else
    return false;


}



*/
