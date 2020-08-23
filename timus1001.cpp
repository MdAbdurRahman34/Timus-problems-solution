#include<bits/stdc++.h>
using namespace std;
int main()
{

    unsigned long long x;
    double a[128*1024];
    int j=0;

     while(cin>>x&&x!=EOF)
    {

        double v=sqrt(x);
        a[j]=v;
        j++;

    }
    for(j=j-1;j>=0;j--)
    {
        cout<<fixed<<setprecision(4)<<a[j]<<endl;
    }



}
/*
 ifstream file("input.txt");
  while(1)
    {

       cin>>x;
       if(x!=EOF)
       {
        double v=sqrt(x);
        a[j]=v;
        j++;
       }
       else
       {
           break;
       }

    }
    for(j=j-1;j>=0;j--)
    {
        cout<<fixed<<setprecision(4)<<a[j]<<endl;
    }



*/
