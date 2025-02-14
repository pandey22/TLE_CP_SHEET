#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    bool flag = false;
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
    {
        if(v[i]<0)
            v[i]=-1*(v[i]);
        else if(v[i]==0)
            flag = true;
    }
    if(flag){
        cout<<0;
        return 0;
    }
    sort(v.begin(),v.end());
    cout<<v[0];

    return 0;
}