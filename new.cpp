#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,n;
     cin>>n;

    for(int i=0;i<n;i++){
    cin>>a;
     cin>>b;
      cin>>c;
       cin>>d;
       if(a==b && c==b&&c==d){
           cout<< "YES"<<endl;
           
       }else{
           cout<<"NO"<<endl;
       }
    }
}

