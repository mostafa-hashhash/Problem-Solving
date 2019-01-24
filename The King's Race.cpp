#include <bits/stdc++.h>
using namespace std;

long long n,a,b;

int main() 
{
	cin >> n ;
	cin >> a>> b;
	
	long long ws = max(a,b)-1;
	long long bs = n-max(a,b)+(max(a,b)-min(a,b)) ;
	
	cout << (ws>bs ? "Black":"White");
		
	
	return 0;
}
