#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
       string s;
        cin>>s;
        int count =0;
        for(int i=0;i<s.length();i++){
             if(s[i]=='1'){
                count++;
             }
        }cout<<count<<endl;
    }
}