#include<bits/stdc++.h>
using namespace std;
int main () {
    string s;
    cin>>s;

    // pre compute
    unordered_map<char,int> mpp; // first priority is unordered else ordered map
    for(int i=0; i<s.size(); i++) {
        mpp[s[i]]++;
    }

    // iterating map
    for( auto it : mpp) {
        cout<<it.first<<" "<<it.second<<endl;
    }

    //fetch
    int q;
    cin>>q;
    while(q--) {
        char c;
        cin>>c;
        cout<<mpp[c]<<endl;
    }

}