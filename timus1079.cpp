#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[100010];
  a[0]=0;
  a[1]=1;
    for(int i=1;i<=100000 / 2;i++)
    {
        a[2*i]=a[i];
        a[2*i+1]=a[i]+a[i+1];




    }
    int n;



    while(1)
    {
        cin>>n;
        if(n==0)
            break;
        else{
                 int max=0;
            for (int i=0;i<=n;i++)

        {
    if(max<a[i])
        max=a[i];

            }
            cout<<max<<endl;
        }
    }



}
