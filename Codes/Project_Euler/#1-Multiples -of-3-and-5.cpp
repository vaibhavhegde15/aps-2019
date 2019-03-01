#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long sum(long long n,long long t){
    long long p=(t-1)/n;
    return (n*(p)*(p+1))/2;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << sum(3,n)+sum(5,n)-sum(15,n) << endl;
    }
    return 0;
}
