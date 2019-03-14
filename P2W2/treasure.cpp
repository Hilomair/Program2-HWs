#include <bits/stdc++.h>

using namespace std;

vector<int> r[5001];
int v[5001],a[5001],check[5001];
long long ans,cnt;
void dfs(int b)
{
    if(ans<v[b])    ans=v[b];
    if(r[b].empty())
        return;
    for(int i=0;i<r[b].size();i++)
    {
        int now=r[b][i];

        if(!check[now])
        {
            check[now]=1;
            dfs(now);
        }

    }
    return;
}


int main()
{
    int n,m,t;
    while(cin>>n>>m>>t)
    {
        ans=0;cnt=0;
        if(!n &&!m&&!t)
            break;
        for(int i=0;i<5001;i++)
        {
            v[i]=0;
            a[i]=0;
            check[i]=0;
            r[i].clear();
        }
        for(int i=0;i<t;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<m;i++)
        {
            int tmp1,tmp2;
            cin>>tmp1>>tmp2;
            r[tmp1].push_back(tmp2);
        }
        for(int i=0;i<t;i++)
            dfs(a[i]);
        cout<<ans<<"\n";
    }
    return 0;
}
