#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m=0;
    cin >> m;
    int sum=0 , temp=m;
    while(temp){
        if(temp>=10){
            sum+=temp/10;
            temp%=10;
        }else if(temp>=5){
            sum+=temp/5;
            temp%=5;
        }else{
            sum+=temp;
            temp=0;
        }
    }
    cout << sum;
    return 0;
}
