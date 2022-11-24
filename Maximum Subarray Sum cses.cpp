#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli a[n];
   for(lli i=0;i<n;i++)
    cin>>a[i];
   lli sum=0,maxi=INT_MIN;
   for(lli i=0;i<n;i++)
   {
       sum+=a[i];
       if(maxi<sum)
        maxi=sum;
       if(sum<0)
        sum=0;
   }
   cout<<maxi<<endl;

    return 0;
}


