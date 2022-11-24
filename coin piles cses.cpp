#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli test;
   cin>>test;
   for(lli e=0;e<test;e++)
   {
       lli a,b;
       cin>>a>>b;
       while(a>0 && b>0)
       {
           if(a>b)
           {
               a=a-2;
               b--;
           }
           else{
            b=b-2;
            a--;
           }
       }
       if(a==0 && b==0)
        cout<<"YES"<<endl;
       else
        cout<<"NO"<<endl;
   }

    return 0;
}


