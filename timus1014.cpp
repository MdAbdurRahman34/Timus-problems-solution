#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[13];
    int n,c,l=0,sum=1,t,i=0;

    cin>>n;
    t=n;
    if(t==1)
    {

        cout<<1;
        return 0;
    }
    if(t==0)
    {

        cout<<10;
        return 0;
    }
    for(i=9;i>1;i--)
    {


       while(n%i==0)
           {
             n=n/i;
             ar[l]=i;
             l++;

           }



    }


if(n==1)
{

    for(int j=l-1;j>=0;j--)
        cout<<ar[j];
}


else
    cout<<-1;


}
/*



    c=i;
             ar[l]=i;
             l++;
               n=n/c;



*/
