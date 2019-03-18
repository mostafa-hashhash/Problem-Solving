#include <bits/stdc++.h> 
using namespace std ;
#define lp(i,n) for(unsigned int i=0;i<n; ++i)
#define ll long long 

void FastInputOutput(){
     ios_base :: sync_with_stdio( 0 ) ;
     cin.tie( 0 ) ;
     cout.tie( 0 ) ;
}

ll es=1,gs=1;

int main()
{
	FastInputOutput();
	string s1, s2 ;
	
	cin >> s1 >> s2 ;
	
	lp(i,s1.length())
		es *= s1[i]-'A'+1 ;
	
	lp(i,s2.length())
		gs *= s2[i]-'A'+1 ;
		
	if( es == gs )
		cout << "STAY" ;
	else
		cout << "GO" ;
}
