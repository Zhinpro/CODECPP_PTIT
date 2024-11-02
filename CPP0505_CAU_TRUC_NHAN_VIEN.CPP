#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct Nhan_vien{
    string ma_nv ="00001";
    string name, sex,date,address, tax_code, assignday;
};
void input(Nhan_vien &a){
    getline(cin,a.name);
    getline(cin,a.sex);
    getline(cin,a.date);
    getline(cin,a.address);
    getline(cin,a.tax_code);
    getline(cin,a.assignday);
}
void output(Nhan_vien a){
    // dung chuan dinh dang dd/mm/yyyy
     if (a.date[1] == '/')
        a.date.insert(0, "0");
    if (a.date[4] == '/')
        a.date.insert(3, "0");
    if (a.assignday[1] == '/')
        a.assignday.insert(0, "0");
    if (a.assignday[4] == '/')
        a.assignday.insert(3, "0");
    cout <<a.ma_nv<<" "<<a.name<<" "<<a.sex<<" "<<a.date<<" "<<a.address<<" "<<a.tax_code<<" "<<a.assignday;
}
int main(){
    Nhan_vien a;
    input(a);
    output(a);
    return 0;
}