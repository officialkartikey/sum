#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
      int a[5];
      for(int j=0;j<5;j++){
          if(j==2){
            continue;
          }else{
            cin>>a[j];
          }
      }
     int ans=0;
      for(int k=-99;k<=200;k++){
          a[2]=k;
          
           int count=0;
          for(int m=0;m<3;m++){
            if(a[m+2]==(a[m]+a[m+1])){
                count++;
            }
          }
          if(count>ans){
        ans=count;
      }
      }cout<<ans<<endl;
    }
    
}