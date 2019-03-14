#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,N,t[1003];
    long long ans,tmp;
    cin>>T;
    while(T--)
    {
        cin>>N;
        for(int i=0;i<N;i++)
            cin>>t[i];
        sort(t,t+N);
        ans=t[0];
        tmp=t[0];
        for(int i=0;i<N-1;i++)
        {
            tmp+=t[i]+t[i+1];
            ans+=tmp;
        }
        cout<<ans;
        if(T)
            cout<<"\n";
    }
    return 0;
}
