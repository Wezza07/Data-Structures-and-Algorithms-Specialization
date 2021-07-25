#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0;
    cin >> n;
    int ans=0;
    vector<int>v;
    for(int i=1 ; i<=n ;i++){
        if(n-i>i){
            v.push_back(i);
            ans++;
            n-=i;
        }else{
            v.push_back(n);
            ans++;
            break;
        }
    }
    cout << ans << endl;
    for(int i=0;i<ans;i++){
        cout << v[i] << " ";
    }
    return 0;
}
