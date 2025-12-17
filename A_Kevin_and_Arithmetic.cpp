#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
   for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int a[n],even=0,odd=0,point=0;
    for(int i=0;i<n;i++){
       cin>>a[i];
       if(a[i]%2!=0){
         odd++;
       }else{
        even++;
       }
    }if(even==0){
     point =n-1;
    }else{
        point=1+odd;
    }
    cout<<point<<endl;
   }
}