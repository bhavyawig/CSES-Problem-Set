#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
   lli n;
   cin>>n;
   if(n%5==0)
    cout<<n/5;
   else
   {
       for(int i=0;i<5;i++)
       {
           n--;
           if(n%5==0)
           {
               cout<<n/5;
               break;
           }
       }
   }


    return 0;
}


