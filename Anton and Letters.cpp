#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
  getline(cin,s);
    s.erase(remove(s.begin(),s.end(),'{'),s.end());
    s.erase(remove(s.begin(),s.end(),','),s.end());
    s.erase(remove(s.begin(),s.end(),'}'),s.end());
sort(s.begin(),s.end());
     s.erase(unique(s.begin(),s.end()),s.end());
   int i,count=0;
   for(i=0;s[i]!=0;i++)
   {
       if(s[i]>=97 && s[i]<=122)
       {
           count++;
       }

   }
   cout<<count;
}
