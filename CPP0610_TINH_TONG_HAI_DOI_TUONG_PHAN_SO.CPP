#include<iostream>
using namespace std;
long long gcd(long long a,long long b);
long long bcnn(long long a,long long b);
class Phan_so{
    private:
        long long tu,mau;
    public:
        Phan_so(long long t=1,long long m=1){
            tu=t;
            mau=m;
        }
        //nhap 
        friend istream& operator >> (istream& mycin,Phan_so &p){
            mycin >> p.tu>>p.mau;
            return mycin;
        }
        //xuat
        friend ostream& operator <<(ostream& mycout,Phan_so p){
            mycout <<p.tu<<"/"<<p.mau;
            return mycout;
        }
        //rutgon
        void rut_gon(){
            long long temp =gcd(mau,tu);
            tu /=temp;
            mau /=temp;
        }
        friend Phan_so operator+ (Phan_so a ,Phan_so b){
            Phan_so p;
            long long temp = bcnn(a.mau,b.mau);
            p.mau=temp;
            p.tu=(temp/a.mau)*a.tu+(temp/b.mau)*b.tu;
            p.rut_gon();
            return p;
        }
    
};
int main(){
    Phan_so a,b;
    cin >> a>>b;
    cout <<a+b;
    
}
long long gcd(long long a,long long b){
    if(b==0) return a;
    else return gcd(b,a%b);
}
long long bcnn(long long a,long long b){
    return (a*b)/gcd(a,b);
}