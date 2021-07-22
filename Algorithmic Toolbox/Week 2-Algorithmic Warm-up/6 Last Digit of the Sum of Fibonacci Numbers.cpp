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
    long long n=0;
    cin >> n;
    long long temp = Pisano(10);
    long long rem  = n%temp;
    long long f[rem+3];
    f[0] = 0 , f[1] = 1;
    for(int i=2 ; i<=rem+2 ; i++){
        f[i] = (f[i-1]%10 + f[i-2]%10)%10;
    }
    if(f[rem+2]==0){
        cout << 9;
    }else{
        cout << f[rem+2]-1;
    }
    return 0;
}
