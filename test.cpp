#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto &x: a)cin>>x;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; i++)
        {
            if((a[i]&a[j])>=(a[i]^a[j]))
            {
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
}