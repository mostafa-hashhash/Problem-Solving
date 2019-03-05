#include <iostream> 
#include <set> 
using namespace std ;

set <char> cs ;
long long ans[100];

long long func(long long x)
{
	if( x ==1 )
		return 1;
	if( x==2 )
		return 2;
	
	
	if( ans[x] != 0 )
		return ans[x];
	else
		ans[x] = func(x-1)+func(x-2) ;
		
	return ans[x];
		
}

int main()
{
	long long n ;
	cin >> n;
	
		
	cout << func(n) ;
	
	return 0;
}
