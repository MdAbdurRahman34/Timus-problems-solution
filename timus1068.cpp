#include<bits/stdc++.h>
using namespace std;


int rt(int N)
{
    if(N>=1)
        {
            return N+rt(N-1);

        }
 else return 0;

}
int rt2(int N)
{
    if(N<=-1)
        {
            return N+rt2(N+1);

        }
else return 0;

}



int main()
{
   int N=0,i=0;
   cin>>N;
if(N>0)
{
 N=rt(N);
 if(N==0)
    cout<<1;
    else cout<<N;


}
else if(N==0)
{

    cout<<1;


}

else{



     N=rt2(N);
  cout<<N+1;




}
}



