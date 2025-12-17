#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        s.erase(s.length()-2,2);
        string st=s+"i";
        cout<<st<<endl;
    }
}