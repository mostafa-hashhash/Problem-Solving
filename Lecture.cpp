#include <bits/stdc++.h>
#include <algorithm>
#include <cmath>
#include <map>
#include <queue>
#include <vector>
#include <set>
#define ll long long
#define lp(i,n) for(int i=0 ; i<n ;++i)
using namespace std;

map <string , string> mp;
string x,y,s;
int  n,m;
int main()
{
	
	cin >> n >> m ;
	
	lp(i,m)
	{
		cin >> x >> y ;
		mp[x]=y;
	}
	
	lp(i,n)
	{
		cin>>s;
		cout << ((mp[s].size() <  s.size() ) ? mp[s] : s )+ " "  ;
	}
	
	return 0;
}
