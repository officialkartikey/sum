#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> a(n);
       for(int i=0;i<n;i++){

            cin>>a[i];
        }
        int c1=0,c2=0;
        for(int i=0;i<n;i++){

            if(a[i]%2==0){
               c1++;
            }else if(a[i]%2!=0){
                c2++;
            }
        }if(c1==n){
            for(int i=0;i<n;i++){

            cout<<a[i]<<" ";
        }cout << '\n';

        }else if(c2==n){
              for(int i=0;i<n;i++){

             cout<<a[i]<<" ";
        }cout << '\n';

        }else{
            sort(a.begin(),a.end());
                  for(int i=0;i<n;i++){

             cout<<a[i]<<" ";
        }cout << '\n';

            
        }
    }
}
