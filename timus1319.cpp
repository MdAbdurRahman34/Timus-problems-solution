#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[100][100];
    int n,k=0;
  cin>>n;
    int p,q;
    int temp=n-1;
 for(int i=0;i<n;i++)
        {
            p=0;q=temp-i;
            while(p<n&&q<n)
            {
                k++;
                a[p][q]=k;
                p++;
                q++;

            }



        }
 for(int i=0;i<n-1;i++)
        {
            p=1+i;q=0;
            while(p<n&&q<n)
            {
                k++;
                a[p][q]=k;
                p++;
                q++;

            }

        }
        for(int i=0;i<n;i++)
        {
             for(int j=0;j<n;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
        }


}

