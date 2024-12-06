#include<iostream>
#include<string>
using namespace std;
class Sinh_vien{
    private:
    string mssv, ho_ten,lop,email;
    public:
    Sinh_vien(){
        mssv=ho_ten=lop=email="";
    }
    friend istream& operator >>(istream& mycin, Sinh_vien &sv);
    friend ostream& operator <<(ostream& mycout, Sinh_vien sv);
    string getmssv(){
        return mssv;
    }
    string getlop(){
        return lop;
    }
};
istream& operator >>(istream& mycin, Sinh_vien &sv){
    getline(mycin,sv.mssv);
    getline(mycin,sv.ho_ten);
    getline(mycin,sv.lop);
    getline(mycin,sv.email);
    return mycin;
}
ostream& operator <<(ostream& mycout, Sinh_vien sv){
    cout <<sv.mssv<<" "<<sv.ho_ten<<" "<<sv.lop<<" "<<sv.email<<endl;
    return mycout;
}

int main(){
    int n; cin >> n;
    cin.ignore();
    Sinh_vien ds_sv[n];
    for(int i =0;i<n;i++){
        cin >> ds_sv[i];
    }
    int sl; cin >> sl;
    cin.ignore();
    while(sl--){
        string ten_lop1; getline(cin,ten_lop1);
        string ten_lop;
        //bat dk chuan hoa
        // co the dung ki tu thu 5 cua mssv so sanh voi ky tu dau tien cua ten_lop1
        if(ten_lop1=="Ke toan") ten_lop="DCKT";
        if(ten_lop1=="Cong nghe thong tin") ten_lop="DCCN";
        if(ten_lop1=="An toan thong tin") ten_lop="DCAT";
        if(ten_lop1=="Vien thong") ten_lop="DCVT";
        if(ten_lop1=="Dien tu") ten_lop="DCDT";
        //
        for(int i =0;i<ten_lop1.length();i++){
             ten_lop1[i] = toupper(ten_lop1[i]);
        }
        cout <<"DANH SACH SINH VIEN NGANH "<<ten_lop1<<":"<<endl<<endl; 
        for(int i=0;i<n;i++){ 
            if(ds_sv[i].getmssv().substr(3,4)==ten_lop){// ds_sv[i].getmssv()[5]==ten_lop1[0]
                if((ds_sv[i].getlop()[0]=='E')&&ds_sv[i].getmssv().substr(3,4)=="DCCN") continue;
                if(ds_sv[i].getlop()[0]=='E'&&ds_sv[i].getmssv().substr(3,4)=="DCAT") continue;
                cout << ds_sv[i];
                cout <<endl;
            } 
        }
    }
}
// 4
// B16DCCN011
// Nguyen Trong Duc Anh
// D16CNPM1
// sv1@stu.ptit.edu.vn
// B15DCCN215
// To Ngoc Hieu
// D15CNPM3
// sv2@stu.ptit.edu.vn
// B15DCKT150
// Nguyen Ngoc Son
// D15CQKT02-B
// sv3@stu.ptit.edu.vn
// B15DCKT199
// Nguyen Trong Tung
// D15CQKT02-B
// sv4@stu.ptit.edu.vn
// 1
// Ke toan