#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n,m,x; cin >>n>>m;
        map<int,int> a,b,c;
        for(int i =0;i<n;i++){
            cin >> x;
            a[x]++;
            c[x]++;
        }
        for(int i =0;i<m;i++){
            cin >> x;
            b[x]++;
            c[x]++;
        }
        for(pair<int,int> x:c){
            cout << x.first <<" ";
        }
        cout <<endl;
        for(map<int,int> :: iterator it= a.begin();it!=a.end();it++){
            if(b[(*it).first]>0){
                cout << (*it).first<<" ";
            }
        }
        cout <<endl;
    }
}