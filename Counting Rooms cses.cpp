#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

lli vis[1001][1001];
void dfs(vector<vector<char>>  &a, lli i,lli j,lli n,lli m)
{
    if( i>=n || j>=m || i<0 || j<0 || a[i][j]=='#' || vis[i][j]==1)
        return;

    vis[i][j]=1;
    dfs(a,i-1,j,n,m);
    dfs(a,i,j+1,n,m);
    dfs(a,i,j-1,n,m);
    dfs(a,i+1,j,n,m);
}

int main()
{
   lli n,m;
   cin>>n>>m;
   vector<vector<char>> a(n,vector<char>(m,'#'));
   for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<m;j++)
       {
           cin>>a[i][j];
           vis[i][j]=0;
       }
   }
   lli count=0;
    for(lli i=0;i<n;i++)
   {
       for(lli j=0;j<m;j++)
       {
            if(vis[i][j]==0 && a[i][j]=='.')
            {
                //cout<<i<<" "<<j<<endl;
                count++;
                dfs(a,i,j,n,m);
            }
       }
   }
   cout<<count<<endl;

    return 0;
}


