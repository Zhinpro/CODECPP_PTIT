#include<iostream>
using namespace std;
int main(){
    int t ; cin >>t;
    while(t--){
        int n; cin >>n;
        int A[n];
        for(int i =0;i<n;i++){
            cin >> A[i];
        }
        int count =0;
        int l=0,r=n-1;
        while(l<r){
            if(A[l]==A[r]){
                l++; r--;
            }else if(A[l]<A[r]){
                l++;
                A[l]+=A[l-1];
                count ++;
            }else{
                r--;
                A[r]+=A[r+1];
                count++;
            }
        }
        cout << count <<endl;
    }
}