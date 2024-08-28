#include<bits/stdc++.h>
using namespace std;

void SubSeq(int i, vector<int> &ds, int arr[], int n) {
    if(i>=n) {
        for(auto it:ds) {
            cout<<it<<" ";
        }
        if(ds.size()==0) cout<<"{}";
        cout<<endl;
        return;
    }
    //take the element
    ds.push_back(arr[i]);
    SubSeq(i+1, ds, arr, n);

    // not take
    ds.pop_back();
    SubSeq(i+1, ds, arr, n);
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    vector<int> ds;
    SubSeq(0, ds, arr, n);

}