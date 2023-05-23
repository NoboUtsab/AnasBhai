#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,m,i;
    string p="hackerrank";
    string s;
    cin>>t;
    while(t--)
    {
        long long j=0;
        cin>>s;
    m=p.size();
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]==p[j])
        {
            j++;
        }
        if(j==m)
        {
            break;
        }
    }
    if(j==m)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    }
}
