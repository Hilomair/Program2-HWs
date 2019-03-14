#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T,N,M,n[100001];
    priority_queue<int, vector<int>, greater<int> >t;
    cin>>T;
    while(T--)
    {
        int flag=1,f=1;
        long long l=1,r=2147483647,m=0,ans=0;
        cin>>N>>M;
        for(int i=0;i<N;i++)
        {
            cin>>n[i];
            if(n[i]>M)
            {
                f=0;
                r=l;
            }
        }
        while(l<r)
        {
            flag=1;
            m=(l+r)/2;
            for(int i=0;i<N;i++)
            {
                if(t.size()<m)
                    t.push(n[i]);
                else
                {
                    int tmp=t.top();
                    t.pop();
                    tmp+=n[i];
                    if(tmp>M)
                    {
                        flag=0;
                        break;
                    }
                    t.push(tmp);
                }
            }
            if(flag)
                r=m;
            else
                l=m+1;
            int o=t.size();
            for(int i=0;i<o;i++)
                t.pop();
        }
        if(f)
            cout<<r;
        else
            cout<<-1;
        if(T)
            cout<<"\n";
    }
    return 0;
}
