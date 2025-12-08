#include <iostream>

using namespace std;

int main(){
    int n , c0, c1, c2;
    c0=0;
    c1=0;
    c2=0;
    cin>>n;
    int cs=0;
    int ms=INT_MIN;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++){
        cs=cs+v[i];
        if(cs<0) {
            // i++;       
            // cs=v[i];
            cs=0;
        }
        ms=max(ms,cs);
    }
    cout<<ms;
}

// i++; cs=v[i];
commented this part because suppose if the vector is -1 -2 -3 -4 5 then it will skip i when cs<0 so we just do cs=0; in this case, also in kadane algo we never skip any case and 

#from chatgpt 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int cur_sum = a[0];
    int max_sum = a[0];

    for (int i = 1; i < n; i++) {
        cur_sum = max(a[i], cur_sum + a[i]);
        max_sum = max(max_sum, cur_sum);
    }

    cout << max_sum;
    return 0;
}
