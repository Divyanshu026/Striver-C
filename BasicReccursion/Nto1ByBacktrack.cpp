#include<bits/stdc++.h>
using namespace std;
void printCount(int i, int n) {
    if(i>n) return;
    printCount(i+1,n);
    cout<<i<<" ";
}

int main() {
    int n;
    cin>>n;
    printCount(1,n);
}