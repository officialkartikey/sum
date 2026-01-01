#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
       long long n;
        cin >> n;
     if(n%2!=0){
        cout<<-1<<endl;
     }else{
      n=n/2;
      if(n%3==0){
         cout<<n/3<<" ";
      }else if(n%3==1 || n%3==2){
        cout<<(n/3)+1<<" ";
      }
      if(n<2){
        cout<<-1<<endl;
      }
        cout<<n/2<<endl;
      
     }
    }
}