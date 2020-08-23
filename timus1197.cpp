#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin>>N;
   while(N>=1)
   {


        char p,q;
    cin>>p>>q;
    int m,n,c,d,e=0;
int x[8]={2,2,-2,-2,1,-1,1,-1};
int y[8]={1,-1,1,-1,2,2,-2,-2};
bool a[8][8];
for(int i=0;i<=7;i++)
    for(int j=0;j<=7;j++)
    a[i][j]=true;

m=p-97;
n=q-'0';
n=n-1;
    for(int i=0;i<=7;i++)
    {
        c=x[i];
        d=y[i];
     if(m+c>=0&&m+c<=7&&n+d>=0&&n+d<=7)
     {
         if(a[m+c][n+d]==true)
            e++;
     }
    }
cout<<e<<endl;























      N--;
   }
}
