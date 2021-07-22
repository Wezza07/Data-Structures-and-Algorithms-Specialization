#include <iostream>

using namespace std;
long long GCD(long long x , long long y){
    if(y==0){
        return x;
    }else{
        long long temp = x%y;
        return GCD(y , temp);
    }
}

int main()
{
    long long a=0 , b=0;
    cin >> a >> b;
    long long ans = (a*b)/GCD(a,b);
    cout << ans;
    return 0;
}
