#include<bits/stdc++.h>
using namespace std;
void printCount(int i, int n) {
    if(i>n) return;
    cout<<i<<" ";
    printCount(i+1,n);

}
int main() {
    int n;
    cin>>n;
    printCount(1,n);
}