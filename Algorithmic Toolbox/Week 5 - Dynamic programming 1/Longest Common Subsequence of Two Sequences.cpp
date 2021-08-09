#include <iostream>

using namespace std;
int LCS(int n , int a[] , int m , int b[]){
    int LCS[n+1][m+1];
    for(int i=0 ; i<=n ; i++){
        for(int j=0 ; j<=m ; j++){
            if(i==0 || j==0){
                LCS[i][j] = 0;
            }else if(a[i-1]==b[j-1]){
                LCS[i][j] = 1 + LCS[i-1][j-1];
            }else{
                LCS[i][j] = max(LCS[i-1][j] , LCS[i][j-1]);
            }
        }
    }
    return LCS[n][m];
}


int main()
{
    int n=0;
    cin >> n;
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
    }
    int m=0;
    cin >> m;
    int b[m];
    for(int i=0 ; i<m ; i++){
        cin >> b[i];
    }
    int ans = LCS(n , a , m , b);
    cout << ans;
    return 0;
}
