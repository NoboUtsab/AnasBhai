#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ll q,c,m,x,count=0,sum;
    cin>>q;
    while(q--)
    {
        cin>>c>>m>>x;
    if((c==0 && m==0 && x==0) || c==0 ||m==0)
    {
        cout<<"0"<<endl;
    }
    else if(c!=0 && m!=0 && c>m)
    {
        cout<<m<<endl;
    }
    else
    {
        sum=(c+m+x)/3;
        cout<<sum<<endl;
    }
    }
}
