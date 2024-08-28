#include<bits/stdc++.h>
using namespace std;

int count_SubSeq(int i, int arr[], int n, int sum, int K) {
    if(i==n) {
        if(sum==K) return 1;

        return 0;
    }
    sum += arr[i];
    int l= count_SubSeq(i+1, arr, n, sum, K);
    sum -= arr[i];
    int r = count_SubSeq(i+1, arr, n, sum, K);
    return l + r;
}

 int main() {
      int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<count_SubSeq(0, arr, n, 0, k);
    
    
 }