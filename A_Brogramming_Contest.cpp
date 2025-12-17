#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
          string s;
          cin>>s;
        int flip=0;
        for(int i=0;i<n-1;i++){
         if(s[i]!=s[i+1]){
            flip++;
         }
        }
        if(s[0] == '1'){
           cout<<flip+1<<endl;
        }else{
            cout<<flip<<endl;
        }
    }
}