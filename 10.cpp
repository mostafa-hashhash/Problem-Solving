#include <bits/stdc++.h> 
using namespace std ;
#define lp(i,n) for(int i=0;i<n; ++i)
#define ll long long 

void FastInputOutput(){
     ios_base :: sync_with_stdio( 0 ) ;
     cin.tie( 0 ) ;
     cout.tie( 0 ) ;
}

int es,gs,a,b;
char c;

int main()
{
	FastInputOutput();
	ll n;
	cin >> n;
	
	lp(i,n)
	{
		cin >> a >> c >> b ;
		es = 2 + a ;
		gs = 6 + (b*2) ;
		
		cout << "Case "<< i+1 <<":";
		if( es > gs )
			cout << " YES" ;
		if ( gs > es )
			cout << " NO" ;
		if ( es == gs ) 
			cout << " PENALTIES" ;
		if( i < n-1 )
			cout << endl ;
	}
	
}
