#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[101],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];


    }
  sort(a,a+n);
  int mid=(n-1)/2;
  for(int i=0;i<=mid;i++)
    {
      sum=sum+(a[i]+1)/2;

    }
cout<<sum;


}
