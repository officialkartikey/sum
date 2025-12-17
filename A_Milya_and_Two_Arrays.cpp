#include <bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 for(int i=0;i<t;i++){
    int n;
    cin>>n;
    set<int> a;
    set<int> b;
    for(int j=0;j<n;j++){
        int x;
        cin>>x;
       a.insert(x);
    }
    for(int k=0;k<n;k++){
        int y;
        cin>>y;
        b.insert(y);
    }
    if((a.size()+b.size())>=4){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
 }
    }