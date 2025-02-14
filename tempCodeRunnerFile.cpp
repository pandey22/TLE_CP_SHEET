#include <bits/stdc++.h>
using namespace std;

int main() {
    // int cases;
    // cin >> cases;

    // while (cases--) {
    //     int n;
    //     cin >> n;
    //     vector<int> v(n);

        
    //     for (int i = 0; i < n; i++) {
    //         cin >> v[i];
    //     }

    //     map<int, int> mp;

        
    //     for (auto it : v) {
    //         mp[it]++;
    //     }
    //     for (auto it : mp) {
    //         cout << it.first << " " << it.second << endl;
    //     }
    // }
    int n;
    cin>>n;
    vector<int> v;
    v.push_back(n);
    while(n!=1)
    {
        if(n%2==0)
        {
            n/=2;
            v.push_back(n);
        }
        else{
            n=(n*3)+1;
            v.push_back(n); 
        }    
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }    

    }

    return 0;
}
