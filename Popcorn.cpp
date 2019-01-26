#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

ll n,t,res,m ;
ll fib(int x);

int main()
{
	freopen("popcorn.in","r",stdin);
	
    cin >> t;

    for(int i=0 ; i < t ; ++i)
    {
		res =1 ;
		
		cin >> n >> m ;
		for( int j=0 ; j<m ; j++)
		{
			res *= (n-j) ;
		}
		
		res /= fib(m);
		
		cout << res << endl;
	}
	
    return 0;
}

ll fib(int x)
{
	if ( x == 1 ) return 1 ;
	
	return x*fib(x-1) ;
}
