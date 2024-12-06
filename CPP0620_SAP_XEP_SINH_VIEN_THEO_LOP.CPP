#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class sinh_vien{
    public:
    string mssv,ten,lop,email;
    friend istream& operator >> (istream& is, sinh_vien &sv);
    friend ostream& operator <<(ostream&os,sinh_vien sv);
    
};
istream& operator >> (istream& is, sinh_vien &sv){
        getline(is,sv.mssv);
        getline(is,sv.ten);
        getline(is,sv.lop);
        getline(is,sv.email);
        return is;
    }
// Cong thuc: kdl operator KH operator ()
ostream& operator <<(ostream&os,sinh_vien sv){
        os<< sv.mssv <<" "<<sv.ten<<" "<<sv.lop<<" "<<sv.email<<endl;
        return os;
    }
bool cmp(sinh_vien a,sinh_vien b);
void sapxep(sinh_vien ds[],int n);

int main(){
    int n;
    cin >>n;
    cin.ignore();
    sinh_vien ds[n];
    for(int i =0;i<n;i++){
        cin >> ds[i];
    }
    sapxep(ds,n);
    for(int i =0;i<n;i++){
        cout << ds[i];
    }
}
bool cmp(sinh_vien a,sinh_vien b){ // muon sv a dung truoc sv b thi return true
    if(a.lop==b.lop) return a.mssv<b.mssv;
    return a.lop<b.lop;
}
// bool cmp(sinh_vien a,sinh_vien b){ // comparator
// 	if(a.lop<b.lop) return 1;
// 	if(a.lop==b.lop){
// 		if(a.mssv<b.mssv) return 1;
// 	}
// 	return 0;
// }
void sapxep(sinh_vien *ds,int n){
     sort(ds,ds+n,cmp);
}