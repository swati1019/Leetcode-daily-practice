#include <iostream>
#include <map>
using namespace std;
int main(){
    unordered_map<int,int> mp;
    int n,c;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    cin>>c;
    for(int i=0; i<n; i++){
        mp[v[i]]=i;
    }
    for(int i=0; i<n; i++){
        if(mp.find(c-v[i]) != mp.end()){
            cout<<i<<mp[c-v[i]];
            break;
        }
    }
}

#earlier i was using for the last for function because i did not know that find function has TC of 1 in unordered map beacuse it is hash, array mai abhi bhi it has TC of n only.
for( auto p:mp){
        int x=p.first;
        if(mp.count(c-x)){
            cout<<mp[c-x]<<mp[x];
            break;
        }
    }
