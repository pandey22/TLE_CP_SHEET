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
        vector<int> permutation(n);
        for(int i=0;i<n;i++)
            cin>>permutation[i];
 
        if(permutation[0]==1)
            cout<<"Yes"<<endl;
        else    
            cout<<"No"<<endl;
        
    }
    return 0;
}