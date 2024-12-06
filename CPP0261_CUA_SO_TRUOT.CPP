#include<iostream>
#define loop(i,a,b) for(int i =a;i<b;i++)
using namespace std;
int main(){
//Nhap matran
    int n; cin >>n;
    int A[n][n];
    loop(i,0,n) loop(j,0,n) cin >>A[i][j];
    int m; cin >>m;
    int B[m][m];
    loop(i,0,m) loop(j,0,m) cin >>B[i][j];
// cua so truot
    for(int i =0;i<n;i+=m){
        for(int j =0;j<n;j+=m){
            loop(k,0,m) loop(l,0,m) A[i+k][j+l]*=B[k][l];
        }
    }
// in ra kq
    loop(i,0,n){
        loop(j,0,n) cout <<A[i][j]<<" ";
        cout <<endl;
    } 
}
