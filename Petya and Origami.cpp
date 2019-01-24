#include <bits/stdc++.h>
using namespace std;
#define lp(i,n) for(int i=0;i<n;i++)

long long result ,y , x , c[3] = {2, 5, 8} ;

int main() 
{
	
	cin >> x >> y ;
	
	lp(i,3) c[i] *= x ;
	
	lp(i,3)	result += (int)ceil(  (double)c[i]/y ) ;
	
	cout << result ;
	
    return 0;
}
