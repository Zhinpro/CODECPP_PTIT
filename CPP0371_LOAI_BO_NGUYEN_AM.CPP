#include<iostream>
using namespace std;
int main(){
    string s="ABC";
    for(int i =0;i<s.length();i++){
        s[i] = tolower(s[i]);
    }
    for(int i =0;i<s.length();i++){
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'){
            cout <<"."<<s[i];
        }
    }
}