#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    pair<int,int> a[50001];
    cin>>n;
    while(n--)
    {
        cin>>m;
        long long ans=0;
        for(int i=0;i<m;i++)
            cin>>a[i].first>>a[i].second;
        sort(a,a+m);
        for(int i=0;i<m;i++)
        {
            if(a[i+1].first<=a[i].second && i!=m-1)
                for(int j=i+1;j<m;j++)
                {
                    if(a[i].second<a[j].second)
                        a[i].second=a[j].second;
                    if(a[j+1].first>a[i].second || j==m-1)
                    {
                        ans+=a[i].second-a[i].first;
                        i=j;
                        break;
                    }
                }
            else
                ans+=a[i].second-a[i].first;
        }
        cout<<ans<<"\n";
    }
    return 0;
}

