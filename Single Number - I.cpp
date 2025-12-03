#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    for(int i=0; i<n; i++){
        c=0;
        for(int j=0; j<n; j++){
            if(v[i]==v[j]) c++;
            else continue;
        }
        if(c==1) cout<<v[i];
    }
}
#alternate method iski TC O(n) hai uprer wale ki O(n^2) hai

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
    for(int x:v){
        mp[x]++;
    }
    for(int x:v){
        if(mp[x]==1) cout<<x;
}
}
