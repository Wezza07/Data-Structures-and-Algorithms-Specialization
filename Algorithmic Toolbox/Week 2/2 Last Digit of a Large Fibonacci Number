#include <iostream>

using namespace std;

int main()
{
    long long n=0;
    cin >> n;
    long long f[n+1];
    f[0] = 0;
    f[1] = 1;
    for(long long i=2 ; i<=n ; i++){
        f[i] = ((f[i-1]%10) + (f[i-2]%10))%10;
    }
    cout << f[n];
    return 0;
}
