#include<iostream>
#include<vector>
using namespace std;
void mysort(vector<int> &a);
int main(){
    int t;
    cin >>t;
    while(t--){
        int n; cin >>n;
        vector<int> A(n);
        for(int i =0;i<n;i++){
            cin >> A.at(i);
        }
        mysort(A);
        int sl;
         // de vong for duoi in du phan tu
        for(int i =0;i<n/2;i++){
            cout <<A.at(i)<<" "<<A.at(n-i-1)<<" "; 
        }
        if(n%2!=0) cout << A.at(n/2);
        cout <<endl;
    }
}
void mysort(vector<int> &a){
    for(int i =0;i<a.size()-1;i++){
        for(int j =i+1;j<a.size();j++){
            if(a.at(i)<a.at(j)){
                swap(a.at(i),a.at(j));
            }
        }
    }
}
// idea:  sap xep sau do in so dau tien r den so cuoi