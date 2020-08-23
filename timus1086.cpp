#include<bits/stdc++.h>
using namespace std;




int binarys(int ar[],int l,int r,int pos)
{





 while (l <= r) {
        int m = l + (r - l) / 2;
        if (m == pos)
            {
                int t=ar[m];

                return t;
            }


        if (m < pos)
            l = m + 1;
        else
            r = m - 1;
    }


return 0;

}







int p(int n)
{
   if(n<=1)
    return -1;
   for(int i=2;i*i<=n;i++)
    if(n%i==0)
    return -1;
   return n;

}

int main()
{

 int ar[15001];
    int a,c=0,k=0,l=2;
    ar[0]=0;
    ar[1]=2;

  for(int m=1;m<=163841;m=m+2)
  {




      k=p(m);

if(k!=-1)
{
      ar[l]=k;
     l++;

}









  }

int st=1,r=15001,pos,h;
cin>>h;
for(int i=1;i<=h;i++)
{

    cin>>pos;
cout<<binarys( ar,st,r, pos)<<endl;

}
  }
/*








 else
   // cout<<p(n)<<" is not prime "<<endl;

  }
  else if(n==2)
  {
     //  cout<<n<<" is  prime "<<endl;

  }
   else
   {
       // cout<<n<<" is not prime "<<endl;

   }



*/
