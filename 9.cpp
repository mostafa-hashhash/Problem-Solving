#include <bits/stdc++.h> 
using namespace std ;
#define lp(i,n) for(int i=0;i<n; ++i)
#define ll long long 

void FastInputOutput(){
     ios_base :: sync_with_stdio( 0 ) ;
     cin.tie( 0 ) ;
     cout.tie( 0 ) ;
}

int main()
{
	FastInputOutput();
	ll n;
	cin >> n ;
	
	lp(i,n)
	{
	ll x;	
	cin >> x ;
	cout << 2 * x * x << '\n' ;
	
	}
	
}
