#include <bits/stdc++.h>
using namespace std;

long long s,a,b,c,t ;

int main() 
{
		cin >> t ;
		for(int i=0;i<t;++i)
		{
			cin >> s >> a >> b >> c ;
		
		cout << (s/c) + (b * ((s/c)/a)) << endl;
		}
		
		 
    return 0;
}
