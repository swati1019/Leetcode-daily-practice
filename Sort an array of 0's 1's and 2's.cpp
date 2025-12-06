SOLUTION 1:
#include <iostream>
#include <vector>
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
    for(int i=0; i<n; i++){
        if(v[i]==0) c0++;
        else if(v[i]==1) c1++;
        else if(v[i]==2) c2++;
    }
    while(c0--) cout<<"0";
    while(c1--) cout<<"1";
    while(c2--) cout<<"2";

}

SOLUTION 2:
you can use merge sort:

SOLUTION 3:
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int low = 0, mid = 0, high = n - 1;

    while(mid <= high){
        if(v[mid] == 0){
            swap(v[low], v[mid]);
            low++;
            mid++;
        }
        else if(v[mid] == 1){
            mid++;
        }
        else{ // v[mid] == 2
            swap(v[mid], v[high]);
            high--;
        }
    }

    // print sorted array
    for(int x : v) cout << x << " ";
}

#discription:
sol1 is not 100% correct because in the question it was asked to do sorting in the array it self but we didnt do this and it has TC of n;
sol2 merge sort we can do but ismai temp vector bnate hai we donnt do changes in the array itself;
sol3 this is by chat gp obv its 100% correct and its TC is 1;
sol4 we can make a ordered map of it can print it but agian we need to do the changes in array itself so sol3 is best;
