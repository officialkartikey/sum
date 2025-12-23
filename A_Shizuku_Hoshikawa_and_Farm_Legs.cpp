#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n%2!=0){
            cout<<0<<endl;
        }else if(n%2==0){
          
            int b=n/4;

            cout<< b+1<<endl;
        }
    }
}