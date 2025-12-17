#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
         int min=9;
        while(x>0){
          int  n=x%10;
          if(n<min){
            min=n;
          }
          x=x/10;
        } cout<<min<<endl;    
    }
}