#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
       string s;
        cin>>s;
        int c1=0,c2=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'Y'){
                c1++;
            }
            else{
                c2++;
            }
        }if(c1==0||c1==1){
        cout<<"YES"<<endl;
    }else if(c2==0){
        cout<<"NO"<<endl;
    }else if (c1>1){
        cout<<"NO"<<endl;
    }
        
    }
    
}