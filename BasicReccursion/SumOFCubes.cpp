#include<bits/stdc++.h>
using namespace std;

int SUM(int i, int sum) {
    if(i<1) return sum;

    SUM(i-1,sum+(i*i*i));
}
int main () {
    int n;
    cin>>n;
    cout<<SUM(n,0);
}