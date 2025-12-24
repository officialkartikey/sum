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
        int c1=0, c2 = INT_MAX;;
         for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                if(j==i){
                    continue;
                }else if(i==(n-1)){
                    continue;
                }
                else{
                c1+=abs(a[j+1]-a[j]);
                }
            }if(c1<c2){
               c2=c1;
            }
         }cout<<c2<<endl;
    }
}