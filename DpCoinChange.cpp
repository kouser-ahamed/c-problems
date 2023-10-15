#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int dp_CoinChange(int total, vector<int>&coin)
{
    int t[total+1];
    int c[total+1];
    t[0]=0;
    c[0]=-1;
    for(int i=1;i<=total;i++)
    {
        t[i]=INT_MAX-1;
        c[i]=-1;
        
    }
    for(int j=0;j<coin.size();j++)
    {
        for(int i=coin[j];i<=total;i++)
        {
        int temp= min(t[i],1+t[i-coin[j]]);
        if(temp!=t[i])
        {
            t[i]=temp;
            c[i]=j;
        }
    }
}
return t[total];
}
int main()
{
    int total;
    cin>>total;
    int n;
    cin>>n;
    vector<int>coin(n);
    for(int i=0;i<n;i++)
    {
        cin>>coin[i];
        
    }
    int ans= dp_CoinChange(total,coin);
    if(ans!=(INT_MAX-1))
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
}
