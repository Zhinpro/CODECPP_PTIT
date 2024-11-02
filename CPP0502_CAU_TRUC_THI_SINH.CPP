#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct Thi_sinh{
    string ho_ten;
    string date;
    float a,b,c;
};
int main(){
    Thi_sinh sv;
    getline(cin,sv.ho_ten);
    getline(cin,sv.date);
    cin >>sv.a>>sv.b>>sv.c;
    cout <<sv.ho_ten<<" "<<sv.date<<" "<<fixed<<setprecision(1)<<sv.a+sv.b+sv.c;
}
