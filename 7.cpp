
#include <bits/stdc++.h> 
using namespace std ;

int n,t ;
#define lp(i,n) for(int i=0;i<n; ++i)

void FastInputOutput(){
     ios_base :: sync_with_stdio( 0 ) ;
     cin.tie( 0 ) ;
     cout.tie( 0 ) ;
}

int main()
{
	FastInputOutput();
	
	cin >> n;
	
	while(n--)
	{
		cin >> t ;
		int arr[20]= {0} ;
		int x=0;
		
		lp(i,t)
		{
			cin >> arr[i];
			
			if(arr[i] != 0) ++x;
		}
		cout << x << '\n';
	}
}
