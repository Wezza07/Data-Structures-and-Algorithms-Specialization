#include <iostream>

using namespace std;
long long Pisano(int m){
    long long  a=0 , b=1 , c=a+b , ans=0;
    for(long long i=0 ; i <m*m ; i++){
        c = (a%m+b%m)%m;
        swap(a,b);
        swap(b,c);
        if(a==0 && b==1){
            ans=i+1;
            return ans;
        }
    }
}

int main()
{
    long long n=0 , m=0;
    cin >> n >> m;
    long long temp = Pisano(m);
    long long rem  = n%temp;
    long long f[rem+1];
    f[0] = 0 , f[1] = 1;
    for(int i=2 ; i<=rem ; i++){
        f[i] = (f[i-1]%m + f[i-2]%m)%m;
    }
    cout << f[rem];
    return 0;
}
