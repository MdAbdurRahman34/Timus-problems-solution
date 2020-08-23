#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[22],sum=0,s=3000000,temp;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    for(int i=0;i<(1<<n);i++)
    {
        int s1=0;
        for(int j=0;j<n;j++)
        {

            if(i&1<<j)
            {
                s1=s1+a[j];
            }



        }
        temp=abs(2*s1-sum);
        if(s>temp)
            s=temp;
    }
    cout<<s<<endl;

}
/*
bit mask
to solve this problem
create all possible combination
cheack j th bit on or off

divide 2 group
total weight w
one group weight x
2nd group weight w-x
find out minimum weight difference
=(x-(w-x))
=2x-w












*/
