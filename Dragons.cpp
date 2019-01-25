#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
#define lp(i,n) for(int i=0 ; i<n ;++i)

using namespace std;

pair<int,int>  arr[10000] ;
int s,n;

int main()
{
	
	cin >> s >> n ;
	
	lp(i,n)
	{
		cin >> arr[i].first >> arr[i].second ;
	}
	
	sort ( arr , arr+n );
	
	lp(i,n)
	{
		if ( s > arr[i].first )
			s += arr[i].second ;
		else
		{
			cout << "NO" ;
			return 0;
		}
	}
	
	cout << "YES" ;
	return 0;
}
