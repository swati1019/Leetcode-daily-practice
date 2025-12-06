#include <iostream>

using namespace std;

int main(){
    int n , c0, c1, c2;
    c0=0;
    c1=0;
    c2=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    unordered_map<int,int> mp;
    for( int x : v){
        mp[x]++;
        if(mp[x]>=n/2) {
            cout<<x;
            break;
        } 
    }
}
