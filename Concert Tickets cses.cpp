#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n,m;
   cin>>n>>m;
   multiset<lli,greater<lli>> vec;
   for(int i=0;i<n;i++)
   {
       lli a;
       cin>>a;
        vec.insert(a);
   }
   for(int i=0;i<m;i++)
   {
       lli v;
       cin>>v;
       auto low1 =vec.lower_bound(v);
       if(low1==vec.end())
        cout<<-1<<endl;
       else
       {
           cout<<*low1<<endl;
           vec.erase(low1);
       }
   }

    return 0;
}


