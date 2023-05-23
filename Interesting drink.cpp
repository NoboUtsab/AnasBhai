#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long n,q,m,i,l,r,mid;
    cin>>n;
    long long a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>q;
    while(q--)
    {
        cin>>m;
        l=-1;
        r=n;

        while(l+1<r)
        {
            mid=(l+r)/2;
            if(a[mid]<=m)
            {
                l=mid;

            }
            else if(a[mid]>m)
            {
                r=mid;
            }
        }
        cout<<l+1<<endl;

    }
}
