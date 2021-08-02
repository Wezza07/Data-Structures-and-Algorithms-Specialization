#include <iostream>

using namespace std;

int Merge(int arr[] , int l , int m , int r){
    int n1 = m-l+1;
    int n2 = r-(m+1)+1;
    int L[n1] , R[n2];
    for(int i=0 ; i<n1 ; i++){
        L[i] = arr[l+i];
    }
    for(int i=0 ; i<n2 ; i++){
        R[i] = arr[m+1+i];
    }
    int i=0 , j=0 , k = l;
    int cnt=0;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k] = L[i];
            i++;
        }else{
            arr[k] = R[j];
            j++;
            cnt+=(m + 1) - (l + i);
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
    return cnt;
}


int MergeSort(int arr[] , int l , int r){
    int inv=0;
    if(l<r){
        int m = (l+r)/2;
        inv += MergeSort(arr , l , m);
        inv += MergeSort(arr,m+1,r);
        inv += Merge(arr , l , m , r);
    }
    return inv;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int ans = MergeSort(a,0,n-1);
    cout << ans;
    return 0;
}
