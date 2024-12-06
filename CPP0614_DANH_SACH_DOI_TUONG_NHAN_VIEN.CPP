#include<iostream>
#include<string>
using namespace std;
class Nhan_vien{
    public:
    string ma_nv, name, gender, date, address, code_tax, assign_day;
    friend istream& operator >> (istream& mycin, Nhan_vien& nv){
        getline(mycin,nv.name);
        getline(mycin,nv.gender);
        getline(mycin,nv.date);
        getline(mycin,nv.address);
        getline(mycin,nv.code_tax);
        getline(mycin,nv.assign_day);
        return mycin;
    }
    friend ostream& operator <<(ostream& mycout,Nhan_vien nv){
        // chuan hoa dang dd//mm//yyyy
        if(nv.assign_day[1]=='/') nv.assign_day.insert(0,"0");
        if(nv.date[1]=='/')  nv.date.insert(0,"0");
        if(nv.assign_day[4]=='/') nv.assign_day.insert(3,"0");
        if(nv.date[4]=='/') nv.date.insert(3,"0");
        mycout <<nv.ma_nv<<" "<<nv.name<<" "<<nv.gender<<" "<<nv.date<<" "<<nv.address<<" "<<
        nv.code_tax<<" "<<nv.assign_day<<endl;
        return mycout;
    }
};
int main(){
    int n; cin >>n;
    cin.ignore();
    Nhan_vien nhan_vien[n];
    int count =0;
    for(int i =0;i<n;i++){
        cin >> nhan_vien[i];
        count ++;
        nhan_vien[i].ma_nv = string(5-to_string(count).length(),'0')+to_string(count);
    }
    for(int i =0;i<n;i++){
        cout << nhan_vien[i]<<endl;
    }

}
// Nguyen Van A
// Nam
// 10/2/1982
// Mo Lao-Ha Dong-Ha Noi
// 8333012345
// 1/12/2013
// Ly Thi B
// Nu
// 10/15/1988
// Mo Lao-Ha Dong-Ha Noi
// 8333012346
// 22/08/2011