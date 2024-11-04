#include<iostream>
using namespace std;
int ucln(int  a,int  b);
long long gcd(long long a,long long b);
class Phan_so{
    private:
    long long tu,mau;
    public:
    Phan_so(long long tu=1,long long mau=1){
        tu =tu;
        mau=mau;
    }
    friend istream& operator >>(istream &mycin,Phan_so &p){
        mycin>>p.tu>>p.mau;
        return mycin;
    }
    friend ostream& operator <<(ostream& mycout,Phan_so p){
        mycout <<p.tu<<"/"<<p.mau;
        return mycout;
    }
    void rut_gon(){
        long long temp = gcd(tu,mau);
        tu /=temp;
        mau /=temp;
        
    }
};
int main(){
    Phan_so p(1,1);
    cin >>p;
    p.rut_gon();
    cout <<p;
    return 0;
    
}
long long gcd(long long a,long long b) // su dung euclid
{
    if(b == 0)return a;
    else return gcd(b,a % b);
}
int  ucln(int a,int b){
    if(a==0||b==0){
        return a+b;
    }
    while(a!=b){
        (a>b)?(a-=b):(b-=a);
    }
    return a;
}