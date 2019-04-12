#include <iostream>
#include <string>
using namespace std;


int gcd(int a, int b, int res){
    int two = 2;
    if (a == b)
        return res * a;
    else if ((a % two == 0) && (b % two == 0))
        return gcd(a / two, b / two, two * res);
    else if (a % two == 0)
        return gcd(a / two, b, res);
    else if (b % two == 0)
        return gcd(a, b / two, res);
    else if (a > b)
        return gcd(a - b, b, res);
    else
        return gcd(a, b - a, res);
}


int main() {
	// Complete the program
    cout << gcd(28,16,1) <<endl;
    return 0;
}
