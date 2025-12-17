#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;

        // har 15 numbers me 3 valid
        long long c = (n / 15) * 3;

        // remaining part
        for(int i = 0; i <= n % 15; i++){
            if(i % 3 == i % 5){
                c++;
            }
        }

        cout << c << endl;
    }
}
