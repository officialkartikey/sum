#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
       long long n;
        cin >> n;
       
        vector<int> a(n);
        for(long long i=0;i<n;i++){
            cin>>a[i];
        } 
        int c1=0;
               for(long long i=0;i<n;i++){
            if(a[i]==0){
                c1++;
            }
        } if(c1==n){
            cout<<0<<endl;
        }
        
        int c=0;
          if(a[0]==0||a[n-1]==0){
         for(long long i=1;i<n-1;i++){
             if(a[i]==0){
                c++;
             }
          
        }
      }
         if(c==0){
        cout<<1<<endl;
      }else if(c>0&&c<n){
        cout<<2<<endl;
      }
    }
}