#include <bits/stdc++.h>
# include <math.h>
using namespace std;

int main() 
{ 
    long long int t,n,ans=0;
    cin >> t;
    while(t--){
        cin >> n;
        while (n%2 == 0){
            ans = 2;
            n = n/2; 
        }
        for (long long int i = 3; i <= sqrt(n); i = i+2){
            while (n%i == 0){
                ans = i;
                n = n/i; 
            } 
        }
        if (n > 2){
            ans = n;
        }
        cout << ans << endl;
    }
    return 0; 
} 
