#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int a[n];

        for(int i = 0; i < n-2; i++){
            cin >> a[i];
        }

        int c = 0;
        for(int i = 0; i < n - 2; i++){
            if(a[i] == 1 && a[i+1] == 0 && a[i+2] == 1){
                c++;
            }
        }

        if(c > 0){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
