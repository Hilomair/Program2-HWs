#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,s[1003],t[1003],cnt,cnt2;
    long double ans;
    char a[100000],*b;
    cin>>n;
    fgets(a,100000,stdin);
    while(n--)
    {
        cnt=0;cnt2=0;ans=0;
        for(int i=0;i<1003;i++)
        {
            s[i]=0;
            t[i]=0;
        }
        fgets(a,100000,stdin);
        b=strtok(a," ");
        while(b!=NULL)
        {
            for(int i=0;i<strlen(b);i++)
            {
                if(b[i]=='\n')
                    break;
                if(b[i]=='-')
                    continue;
                s[cnt]*=10;
                s[cnt]+=b[i]-'0';
            }
            cnt++;
            b=strtok(NULL," ");
        }
        fgets(a,100000,stdin);
        b=strtok(a," ");
        while(b!=NULL)
        {
            for(int i=0;i<strlen(b);i++)
            {
                if(b[i]=='\n')
                    break;
                if(b[i]=='-')
                    continue;
                t[cnt2]*=10;
                t[cnt2]+=b[i]-'0';
            }
            cnt2++;
            b=strtok(NULL," ");
        }
        sort(s,s+cnt);
        sort(t,t+cnt2);
        if(cnt<=cnt2)
            for(int i=0;i<cnt;i++)
            {
                long double tmp=s[i]*s[i]+t[cnt2-1-i]*t[cnt2-1-i];
                tmp =sqrt(tmp);
                ans+=tmp;
            }
        else
            for(int i=0;i<cnt2;i++)
            {
                long double tmp=t[i]*t[i]+s[cnt-1-i]*s[cnt-1-i];
                tmp =sqrt(tmp);
                ans+=tmp;
            }
        long long f=ans;
        cout<<f;
        if(n)
            cout<<"\n";
    }
    return 0;
}
