#include<bits/stdc++.h>
using namespace std;

bool printS(int i, vector<int>&ds, int arr[], int n, int s, int K) {
    if(i==n) {
        //condition satisfied
        if(s==K) {
            for(auto it : ds) {
                cout<<it<<" ";
            }
            return true; //  
        }
        // condition not satisfied
        else return false;
    }
    //take condition
    ds.push_back(arr[i]);
    s += arr[i];
    if(printS(i+1, ds, arr, n, s, K)==true) {
        return true;
    }
    s -= arr[i];
    ds.pop_back();
    //not take condition
    if(printS(i+1, ds, arr, n, s, K)==true) return true;
    else return false;

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