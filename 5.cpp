
#include <bits/stdc++.h> 
using namespace std ;

long long n , arr[1000000];

void FastInputOutput(){
     ios_base :: sync_with_stdio( 0 ) ;
     cin.tie( 0 ) ;
     cout.tie( 0 ) ;
}

int main()
{
	FastInputOutput();
	
	cin >> n;
	
	for(long long i=0; i<n ; ++i)
		cin >> arr[i] ;
	
	sort(arr,arr+n, greater<long long>() );
	
	for(int i=0; i<n ; ++i)
		cout << arr[i] << '\n';
	
}
