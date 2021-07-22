#include <iostream>

using namespace std;

int main()
{
    long long n=0;
    cin >> n;
    long long rem = n%60;
    int f[rem+2];
    f[0]=0 , f[1]=1;
    for(int i=2 ; i<=rem+1 ; i++){
        f[i] = (f[i-1]%10+f[i-2]%10)%10;
    }
    long long ans = (f[rem]*f[rem+1])%10;
    cout << ans;
    return 0;
}
