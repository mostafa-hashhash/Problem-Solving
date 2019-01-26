#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

ll x=1,y,n,k,res ;

int main()
{
	cin >> y >> k >> n ;
	
	x =k-(y%k);
	
	if ( y+x <= n  ) 
	{
		for( ; x+y<=n ; x+=k)
			cout << x << " " ;
	}
	else
		cout << -1 ;

    return 0;
}
