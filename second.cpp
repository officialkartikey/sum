#include<iostream>
using namespace std;
int main(){
   int x,y,z,n;
   string str1[x],str2[x];
   cin>>n;
   int p=0;
   for(int i=0;i<n;i++){
       cin>>x;
       cin>>str1[x];
       cin>>str2[x];
       for(int j=0;j<x;j++){
         for(int k=0;k<x;k++){
            if(str1[j]==str2[k]){
                p++;
            }
         }
       }
   }if(p==x){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }
}