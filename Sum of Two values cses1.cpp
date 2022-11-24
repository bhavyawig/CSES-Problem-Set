#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,target;
   cin>>n>>target;
   lli a[n];
   map<int,int> m;
   for(lli i=0;i<n;i++)
   {
       cin>>a[i];
       m[a[i]]=i;
   }
   lli hogya=0;
   for(lli i=0;i<n;i++){
    lli no=a[i];
    lli dhundo=target-a[i];
    if(m.find(dhundo)!=m.end())
    {
        lli index1=i;
        lli index2=m[dhundo];
        if(index1!=index2 && hogya==0)
        {
            hogya++;
            cout<<index1+1<<" " <<index2+1<<endl;
        }
    }
   }
   if(hogya==0)
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}


