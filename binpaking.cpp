#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>
#include<cmath>

using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>w(n);

    for(auto &x: w)
    {
        cin>>x;
    }

    int cap;
    cin>>cap;
    vector<int>check(n,cap);
    int sum=accumulate(w.begin(),w.end(),0);
    int lb=ceil((double)sum/cap);

    for(int i=0;i<n;i++)
    {
        int pick=w[i];
        for(int j=0;j<n;j++)
        {
            if(pick<=check[j])
            {
                check[j]-=pick;
                break;
            }
        }
    }
    int cnt=0;
    for(auto it: check)
    {
        cnt+=(it!=cap);
    }
    cout<<cnt<<endl;
    }
