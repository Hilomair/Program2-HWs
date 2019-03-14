#include <iostream>
#include <algorithm>

using namespace std;

int ans[1000100];

int main()
{
    long long int p,q,t,i;
    while(cin>>p>>q)
    {
        if(!q)  break;
        t=1;
        while(t<=q) t*=10;
        p*=t;
        p%=q;
        for(i=0;i<=q;i++)
            ans[i]=0;
        for(i=1;;i++)
        {
            if(ans[p]>0) break;
            ans[p]=i;
            p=(p*10)%q;
            //cout<<p<<"\n";
        }
        cout<<i-ans[p]<<"\n";
    }
    return 0;
}
