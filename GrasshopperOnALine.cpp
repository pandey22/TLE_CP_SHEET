#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int cases;
    cin>>cases;
    while(cases--)
    {
        int x,k;
        cin>>x>>k;
        if(x%k !=0)
        {
            cout<<1<<endl<<x<<endl;
        }
        else
        {
            cout<<2<<endl<<x-1<<" "<<1<<endl;
        }
    } 
    return 0;
}