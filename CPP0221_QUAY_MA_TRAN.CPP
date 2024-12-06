#include<iostream>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,m;
        cin >>n>>m;
        int A[n][m],B[n][m]={};
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                cin >> A[i][j];
            }
        }
        // Quay ma tran
        for(int i=n-1;i>=n/2;i--){
            for(int j =n-i;j<=i;j++){// tu thu 1 den cuoi
                B[n-i-1][j]=A[n-i-1][j-1];
                B[j][i]=A[j-1][i];
                B[i][j-1]=A[i][j];
                B[j-1][n-i-1]=A[j][n-i-1];
            }
        }
        // in Kq
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(B[i][j]==0) cout <<A[i][j]<<" ";
                else cout <<B[i][j]<<" ";
            }
        }
          cout <<endl;
    }
  
}
