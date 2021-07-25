#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0;
    cin >> n;
    vector <int> a(n);
    vector <int> b(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    sort(a.begin() , a.end());
    sort(b.begin() , b.end());
    long sum=0;
    for(int i=0;i<n;i++){
        sum+=(long)a[i]*(long)b[i];
    }
    cout << sum;
    return 0;
}
