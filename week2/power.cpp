#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    long long x,n,p,ans;
    while(cin>>a>>b>>p)
    {
        x=0;
        n=0;
        for(int i=0;i<a.size();i++)
            x=(x*10+a[i]-'0')%p;
        for(int i=0;i<b.size();i++)
            n=(n*10+b[i]-'0')%(p-1);
        ans=1;
        while(n>0)
        {
            if(n&1)
            {
                x%=p;
                ans*=x;
                ans%=p;
            }
            x%=p;
            x*=x;
            x%=p;
            n>>=1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
