#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[100][100];
   int b[10000];
    int n,j=0,temp=0,k=0;
  cin>>n;
    for(int i=0;i<n;i++)
    {
         for(j=0;j<n;j++)
            {
             cin>>a[i][j];

            }

    }

    int p,q;
 for(int i=0;i<n;i++)
        {
            p=i;q=0;
            while(p>=0&&q<n)
            {
                b[k]=a[p][q];
                k++;
                p--;
                q++;

            }


        }
         for(int i=1;i<n;i++)
        {
            p=n-1;q=i;
            while(p>=0&&q<n)
            {
                b[k]=a[p][q];
                k++;
                p--;
                q++;

            }


        }
        for(int i=0;i<n*n;i++)
            cout<<b[i]<<" ";

}
