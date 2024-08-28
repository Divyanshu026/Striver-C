#include<bits/stdc++.h>
using namespace std;

void printS(int i, vector<int>&ds, int arr[], int n, int s, int K) {
    if(i==n) {
        if(s==K) {
            for(auto it : ds) {
                cout<<it<<" ";
                 }
                cout<<endl;    
        }
        return;
    }
    //take condition
    ds.push_back(arr[i]);
    s += arr[i];
    printS(i+1, ds, arr, n, s, K);
    s -= arr[i];
    ds.pop_back();
    //not take condition
    printS(i+1, ds, arr, n, s, K);

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
    vector<int> ds;
    printS(0, ds, arr, n, 0, k);
}