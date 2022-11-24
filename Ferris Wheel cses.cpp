#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,x;
   cin>>n>>x;
   lli i=0,j=n-1;
   lli a[n];
   for(lli i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    lli count=0;
    while(i<=j)
    {
        if(i==j){
            count ++;
        j--;
        }
       else if(a[i]+a[j]<=x)
        {
            count++;
            i++;
            j--;
        }
        else
        {
            count++;
            j--;
        }
    }
    cout<<count;


    return 0;
}


