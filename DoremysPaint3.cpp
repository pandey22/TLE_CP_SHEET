#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        vector<long long> v(n);
        map<long,long> mp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()>=3){
            cout<<"No\n";
            continue;   
        }
        else if(mp.size()==1)
        {
            cout<<"Yes\n";
            continue;
        }
        long long freq1 = mp.begin()->second;
        long long freq2 = (++mp.begin())->second;

        if(abs(freq1-freq2)>1)
            cout<<"No\n";
        else    
            cout<<"Yes\n";

    }
return 0;
}