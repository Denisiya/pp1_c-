#include <bits/stdc++.h> 
using namespace std;
 
int main()
{
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
     
    //sort(v.begin(), v.end());

    for(int i = n - 1; i >= 0; i--){
        cout<<v[i]<<" ";
    }

    return 0;
}