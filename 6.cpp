

#include <bits/stdc++.h> 
using namespace std ;

long long x,y;

long long func(long long base, long long power, long long mod) {
    long long result = 1;
    while(power > 0) {

        if(power % 2 == 1) { // Can also use (power & 1) to make code even faster
            result = (result*base) % mod;
        }
        base = (base * base) % mod;
        power = power / 2; // Can also use power >>= 1; to make code even faster
    }
    return result;
}

int main()
{
	cin >> x >> y ;
	cout << func(x,y,x);
}
