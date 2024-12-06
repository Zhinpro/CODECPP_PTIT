#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Sinh_vien{
    public:
   
    friend istream& operator >>(istream& is, Sinh_vien &sv){
        getline(is,sv.mssv);
        getline(is,sv.ho_ten);
        getline(is,sv.lop);
        getline(is,sv.email);
        return is;
    }
    friend ostream& operator <<(ostream& os, Sinh_vien sv){
        os <<sv.get_mssv()<<" "<<sv.get_hoten()<<" "<<sv.get_lop()<<" "<<sv.get_email()<<endl;
        return os;
    }
    // getter
    string get_mssv(){
        return mssv;
    }
    string get_hoten(){
        return ho_ten;
    }
    string get_lop(){
        return lop;
    }
    string get_email(){
        return email;
    }
    private:
      string mssv,ho_ten,lop,email;
};
bool cmp(Sinh_vien a, Sinh_vien b);
int main(){
    int n=0;
    Sinh_vien ds[1000];
    while(cin >>ds[n]) n++;
    sort(ds,ds+n,cmp);
    for(int i =0;i<n;i++){
        cout << ds[i];
    }
}
bool cmp(Sinh_vien a, Sinh_vien b){
    return a.get_mssv()<b.get_mssv();
}
