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
   sort(a,a+n);
   if(n%2==0)
   {
        lli mid1=n/2,sum2=0,sum3=0;
       for(lli i=0;i<n;i++)
        sum2+=abs(a[i]-a[mid1]);
        mid1--;
       for(lli i=0;i<n;i++)
        sum3+=abs(a[i]-a[mid1]);
        cout<<min(sum2,sum3)<<endl;
   }
   else
   {
       lli mid=n/2,sum=0;
       for(lli i=0;i<n;i++)
        sum+=abs(a[i]-a[mid]);
       cout<<sum<<endl;
   }

    return 0;
}


