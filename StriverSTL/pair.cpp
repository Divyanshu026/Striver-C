#include<bits/stdc++.h>
using namespace std;
void explainPair() {
    pair<int, int> p = {1,3};
    cout<<p.first<<" " <<p.second<<endl;
    pair<int, pair<int, int>> pairr = {2, {1,5}};
    cout<<pairr.first<<" "<<pairr.second.second<<" "<<pairr.second.first<<endl;

    pair<int, int> arr[] = {{1,4}, {2,3}, {4,7}};
    cout<<arr[2].second<<" "<<arr[0].first<<" "<<arr[1].second<<" "<<endl;
}



int main() {
    explainPair();
}