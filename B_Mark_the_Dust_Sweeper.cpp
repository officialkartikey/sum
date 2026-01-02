#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
         cin>>a[i];
        }
        int z=0;
        for(int i=0;i<(n-1);i++){
        
            if(a[i]!=0){
              for(int j=i;j<(n-1);j++){
                 if(a[j]==0){
                    z++;
                 }
              }   
             break;
            }
          
        }
       long long s=0;
        for(int i=0;i<n-1;i++){
            s +=a[i];
        }
        cout<<s+z<<endl;
    }
}