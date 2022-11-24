#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   lli sum=(n*(n+1))/2;
   if(sum%2==0)
   {
       cout<<"YES"<<endl;
       vector<int> vec,v2;
       lli k=1,val=0;
       while(val<(sum/2))
       {
           val+=k;
           vec.push_back(k);
           k++;
       }
       if(val>sum/2)
       {
           lli rem=val-(sum/2);
           vec.erase(remove(vec.begin(),vec.end(),rem),vec.end());
           v2.push_back(rem);
       }
       while(k<=n)
       {
           v2.push_back(k);
           k++;
       }
       cout<<vec.size()<<endl;
       for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
       cout<<endl;
       cout<<v2.size()<<endl;
       for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
   }
   else
    cout<<"NO"<<endl;

    return 0;
}


