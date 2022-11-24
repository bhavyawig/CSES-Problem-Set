#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

struct compare {
 bool operator()(const pair<int, int>& value,
        const int& key)
 {
  return (value.first < key);
 }
 bool operator()(const int& key,
     const pair<int, int>& value)
 {
  return (key < value.first);
 }
};

int main()
{
   lli n,x;
   cin>>n>>x;
   lli a[n];
   for(lli i=0;i<n;i++)
    cin>>a[i];

   vector<int> vec,ans;
        int check=0,left,store=0,store2=0;
        for(int i=0;i<n;i++)
            vec.push_back(a[i]);
        sort(vec.begin(),vec.end());
        for(int i=0;i<n;i++)
        {
            if(x>=vec[i])
                left=x-vec[i];
            else
                left=vec[i]-x;
            bool binary=binary_search(vec.begin()+i+1,vec.end(),left);
            if(binary==true && check==0)
            {
                check++;
                store=left;
                store2=vec[i];
            }
        }
lli bas=0,kro=0;
        for(int i=n-1;i>=0;i--)
        {
            if(store==store2)
            {
              if(a[i]==store2 && bas==0){
                ans.push_back(i);
            bas++;}
            else if(a[i]==store && kro==0 && bas==1){
                ans.push_back(i);
            kro++;}
            }
            else
            {
                 if(a[i]==store2 && bas==0){
                ans.push_back(i);
            bas++;}
            if(a[i]==store && kro==0){
                ans.push_back(i);
            kro++;}
            }
        }
   if(ans.size()==0 || ans[0]==ans[1])
   cout<<"IMPOSSIBLE"<<endl;
   else
   {
       cout<<ans[0]+1<<" "<<ans[1]+1<<endl;
   }

    return 0;
}


