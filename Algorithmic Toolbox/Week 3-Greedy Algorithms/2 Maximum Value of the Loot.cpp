#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n=0 , W=0;
    cin >> n >> W;
    vector <pair<int,int>> a(n);
    vector <pair<double,int>> vpu(n);
    for(int i=0 ; i<n ; i++){
        cin >> a[i].first >> a[i].second;
        vpu[i].first = 1.000*(a[i].first)/a[i].second;
        vpu[i].second = a[i].second;
    }
    sort(vpu.rbegin(),vpu.rend());
    int temp=0 , counter=0;
    double sum=0;
    while(W && counter<n){
        temp = min(W,vpu[counter].second);
        sum+=temp*vpu[counter].first;
        W-=temp;
        vpu[counter].second-=temp;
        if(vpu[counter].second==0){
            counter++;
        }
    }
    printf("%.4f",sum);
    return 0;
}
