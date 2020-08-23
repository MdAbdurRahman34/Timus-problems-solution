#include<bits/stdc++.h>
using namespace std;


int binarys(int ar[],int l,int r,int pos)
{



//int t=0;

 while (l <= r) {
        int m = l + (r - l) / 2;
        if (ar[m] == pos)
            {
                //t++;
                return 1;
            }


        if (ar[m] < pos)
            l = m + 1;
        else
            r = m - 1;
    }


return 0;

}


int main()
{

int ar[65537];
     int c=1,sz;
     unsigned int p=1;

sz=1;
ar[1]=1;
     while(p<=2147483647)
 {




    p=p+c;

 sz=sz+1;
ar[sz]=p;
    c++;

 }

int l=1,r=sz;
int k;

cin>>k;
for(int i=1;i<=k;i++)
{

int pos;
cin>>pos;
cout<<binarys(ar,l, r, pos)<<endl;


}


}
//cout<<binary(ar,l,r,pos)<<endl;
/*







*/
