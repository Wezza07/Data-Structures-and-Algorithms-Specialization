#include <iostream>

using namespace std;

int main()
{
    int d=0 , m=0 , n=0;
    cin >> d >> m >> n;
    int x[n+2];
    x[0]= 0 , x[n+1] = d;
    for(int i=1 ; i<=n ; i++){
        cin >> x[i];
    }
    int cr=0 , lr=0 , sum=0;
    while(cr<=n){
        lr = cr;
        while(cr<=n && x[cr+1]-x[lr]<=m){
            cr++;
        }
        if(cr==lr){
            cout << -1;
            return 0;
        }
        if(cr<=n){
            sum++;
        }
    }
    cout << sum;
    return 0;
}
