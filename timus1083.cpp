
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
int n,k,f=1;
    cin>>n>>s;
    k=s.size();
    f=n;
    for(int i=1;n>(k*i);i++)
    {

        f=f*(n-i*k);


    }
    cout<<f;


}
/*

int fb(int n, int k)
{



    int c=0;
    if((n-c*k)>0&&k>=1)
    {
        c++;
        cout<<n<<" ";
        return n*fb((n-c*k),k);

    }
    else
        return 1;





}
int fb2(int n, int k, int mod)
{



    int c=0;
    if((n-c*k)>0&&k>=1)
    {
        c++;
        cout<<n<<" ";
        return n*fb((n-c*k),k);

    }
    else
        return mod ;





}
int main()
{
string s;
 int n,k,f=1,mod=0;

    cin>>n>>s;
k=s.size();
mod=n%k;
if(n%k==0)
    cout<<endl<<fb(n,k);
  else
      cout<<endl<<fb2(n,k,mod);








time limit access so we need to use recursion
 int n,k,f=1;
    cin>>n>>k;
    for(int i=0;n>(k*i);i++)
    {
        f=f*(n-i*k);

    }
    cout<<f;

*/
