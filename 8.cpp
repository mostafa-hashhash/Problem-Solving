#include <bits/stdc++.h> 
using namespace std ;
#define lp(i,n) for(int i=0;i<n; ++i)

void FastInputOutput(){
     ios_base :: sync_with_stdio( 0 ) ;
     cin.tie( 0 ) ;
     cout.tie( 0 ) ;
}

int main()
{
	FastInputOutput();
	//map <int,int> mp = { {1,31}, {2,29}, {3,31}, {4,30}, {5,31}, {6,30}, {7,31}, {8,31}, {9,30}, {10,31}, {11,30} , {12,31} };
	int n,d,m;
	cin >> n;
	
	while(n--)
	{
		cin >> d >> m;
				
		if (m == 1 ){ if ( d == 31){ ++m; d=1;} else ++d; }
		else if (m == 2 ){ if ( d == 29){ ++m; d=1;} else ++d; }
		else if (m == 3 ){ if ( d == 31){ ++m; d=1;} else ++d; }
		
		else if (m == 4 ){ if ( d == 30){ ++m; d=1;} else ++d; }
		else if (m == 5 ){ if ( d == 31){ ++m; d=1;} else ++d; }
		else if (m == 6 ){ if ( d == 30){ ++m; d=1;} else ++d; }
		
		else if (m == 7 ){ if ( d == 31){ ++m; d=1;} else ++d; }
		else if (m == 8 ){ if ( d == 31){ ++m; d=1;} else ++d; }
		else if (m == 9 ) {if ( d == 30){ ++m; d=1;} else ++d; }
		
		else if (m == 10 ){if ( d == 31){ ++m; d=1;} else ++d; }
		else if (m == 11 ){if ( d == 30){ ++m; d=1;} else ++d; }
		else if (m == 12 ){if ( d == 31){ ++m; d=1;} else ++d; }
		
		cout << d << " " << m << '\n' ;
	
	}
}
