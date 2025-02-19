#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    while(cases--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int ans =  0 , count = 0 ;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                count++;
                ans=max(count,ans);
            }
            else
            {
                count=0;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}