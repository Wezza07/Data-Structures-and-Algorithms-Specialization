#include <iostream>

using namespace std;
int GCD(long x , long y){
    if(y==0){
        return x;
    }else{
        long temp = x%y;
        return GCD(y , temp);
    }
}

int main()
{
    long a=0 , b=0;
    cin >> a >> b;
    cout << GCD(a,b);

    return 0;
}
