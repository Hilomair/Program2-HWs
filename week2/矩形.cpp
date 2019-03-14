#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,m,a[100][2],tmpx,tmpy,tmp,ans;
    cin>>n;
    while(n--)
    {
        tmpx=0;
        tmpy=0;
        ans=0;
        cin>>m;
        for(int i=0;i<m;i++)
            cin>>a[i][0]>>a[i][1];
        for(int i=0;i<m;i++)
            for(int j=i+1;j<m;j++)
            {
                tmpx=abs(a[j][0]-a[i][0]);
                tmpy=abs(a[j][1]-a[i][1]);
                if(ans<tmpx*tmpy)
                    ans=tmpx*tmpy;
            }
            //cout<<ansx<<" "<<ansy<<"\n";
        cout<<ans;
        if(n)
            cout<<"\n";
    }
    return 0;
}
