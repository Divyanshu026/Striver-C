#include<bits/stdc++.h>
using namespace std;
void explainPair() {
    map<int, int> mpp;
    mpp[1]=2;
    mpp.insert({3,4});
    mpp.insert({5,1});

    auto it = mpp.find(3);
    cout<<*(it).first;
}


int main() {
    explainPair();
}