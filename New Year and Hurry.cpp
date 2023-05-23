#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i,sum=0,m,count=0;
    cin>>n>>k;
    m=240-k;
    for(i=1;i<=n;i++)
    {
        sum+=i*5;
        if(sum<=m)
        {
            count++;
        }
    }
    cout<<count<<endl;

}
