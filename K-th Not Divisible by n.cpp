#include<bits/stdc++.h>
using namespace std;
int main()
{
     long long t,n,k,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<long long>v;

        for(i=1;i<=2*k;i++)
           {
               if(i%n!=0)
               {
                   v.push_back(i);

               }
           }
        cout<<v[k-1]<<endl;
    }
}
