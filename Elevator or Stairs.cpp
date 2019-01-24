#include <bits/stdc++.h>
using namespace std;

long long x,y,z,t,tt,ts,ttt,tv;
int main() 
{
		cin >> x >> y >> z >> t >> tt >> ttt ;
		
		tv = (3*ttt)+(abs(x-z)+abs(y-x))*tt ;
		
		ts = abs(y-x)*t;
		
		cout << ((ts >= tv) ? "YES":"NO");
	
	return 0;
}
