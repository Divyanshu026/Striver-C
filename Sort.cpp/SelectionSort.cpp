#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)  {
    for(int i=0; i<=n-2; i++) {
        int mini_index = i;
        for(int j=i; j<=n-1; j++) {
            if(arr[j]<arr[mini_index]) {
                mini_index =j;
            }
        }
        int temp =arr[mini_index];
        arr[mini_index]=arr[i];
        arr[i]=temp;
        // swap(arr[i],arr[mini_index]);
    }

}
int main() {
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}