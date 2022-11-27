#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void permute(string& a, int l, int r)
{
    if (l == r)
        cout << a << endl;
    else {
        for (int i = l; i <= r; i++) {
             swap(a[l], a[i]);
             permute(a, l + 1, r);
             swap(a[l], a[i]);
        }
    }
}

int main()
{
    string s;
    cin>>s;
    lli n=s.length();
    if(n==1)cout<<"1"<<endl;
    else if(n==2)cout<<"2"<<endl;
    else if(n==3)cout<<"6"<<endl;
    else if(n==4)cout<<"24"<<endl;
    else if(n==5)cout<<"120"<<endl;
    else if(n==6)cout<<"720"<<endl;
    else if(n==7)cout<<"5040"<<endl;
    else if(n==8)cout<<"40320"<<endl;
        permute(s,0,n-1);
    return 0;
}


