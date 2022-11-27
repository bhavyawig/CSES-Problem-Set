#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,q;
   cin>>n>>q;
   lli a[n];
   for(lli i=0;i<n;i++)
    cin>>a[i];
   lli prefix[n+1];
   prefix[0]=0;
   for(lli i=1;i<=n;i++)
   {
      prefix[i]=prefix[i-1]+a[i-1];
   }
   //for(lli i=0;i<=n;i++)
    //cout<<prefix[i]<<" ";
   //cout<<endl;
   for(lli i=0;i<q;i++)
   {
       lli a,b;
       cin>>a>>b;
       cout<<prefix[b]-prefix[a-1]<<endl;
   }

    return 0;
}


