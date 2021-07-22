#include <iostream>

using namespace std;
long long sum(long long x ){
    if(x==0){
        return 0;
    }else if(x==1){
        return 1;
    }
    long long rem = x%60;
    if(rem==0){
        return 0;
    }
    long long y[rem+3];
    y[0] = 0 , y[1] = 1;
    for(long long i=2 ; i<=rem+2 ; i++){
        y[i] = (y[i-1]%10+y[i-2]%10)%10;
    }
    long long temp = y[rem+2]-1;
    if(temp<0){
        return temp+=10;
    }else{
        return temp;
    }
}

int main()
{
    long long n=0 , m=0;
    cin>>m >>n;
    long long a=sum(n);
    long long b=sum(m-1);
    long long ans = a-b;
    if(ans<0){
        ans+=10;
    }
    cout << ans;
    return 0;
}
