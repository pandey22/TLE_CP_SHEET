#include<bits/stdc++.h>
using namespace std;
#define v vector<int>
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        v arr (n);

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int last = 0 ;
        int ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans = max(ans, arr[i]-last);
            last = arr[i];
        }
        ans = max(ans,2*(k-last));
        cout<<ans<<endl;
    }
}